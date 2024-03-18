#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
    }
    std::cout << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        
        ICharacter* hero = new Character("hero");
        AMateria* mat;
        AMateria* tmp;

        mat = src->createMateria("ice");
        hero->equip(mat);
        tmp = mat;
        mat = src->createMateria("cure");
        hero->equip(mat);
        mat = src->createMateria("cure");
        hero->equip(mat);

        //"Unknown Materia!"
        mat = src->createMateria("test materia"); 
        hero->equip(mat);

        ICharacter* evilEnemy = new Character("evilEnemy");

        std::cout << "Using materia in slot 0:" << std::endl;
        hero->use(0, *evilEnemy);
        std::cout << "Using materia in slot 1:" << std::endl;
        hero->use(1, *evilEnemy);
        std::cout << "Using materia in slot 2:" << std::endl;
        hero->use(2, *evilEnemy);
        std::cout << "Using materia in slot 3 (empty):" << std::endl;
        hero->use(3, *evilEnemy);
        std::cout << "Using materia in slot 4 (slot doesn't exist):" << std::endl;
        hero->use(4, *evilEnemy);

        hero->unequip(3); //empty
        hero->unequip(0);
        delete tmp;

        std::cout << "Using materia in slot 0 (wich should be empty now):" << std::endl;
        hero->use(0, *evilEnemy);

        std::cout << std::endl;
        std::cout << "Destroying everything!" << std::endl;
        delete evilEnemy;
        delete hero;
        delete src;
    }
    return (0);
}