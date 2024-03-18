#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define MAX_INV_SLOTS 4

class Character : public ICharacter
{

private :
    
    std::string _name;
    AMateria    *_inventory[MAX_INV_SLOTS];

public :

    Character(std::string const & name);
    Character(Character const & copy);
    virtual ~Character(void);

    Character & operator =(Character const & src);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};


#endif