#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < MAX_INV_SLOTS; i++)
        _inventory[i] = NULL;
    return ;
}

Character::Character(Character const & copy)
{
    *this = copy;
    return ;
}

Character::~Character(void)
{
    for (int i = 0; i < MAX_INV_SLOTS; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
    return ;
}

Character & Character::operator =(Character const & src)
{
    if (this != &src)
    {
        _name = src._name;
        for (int i = 0; i < MAX_INV_SLOTS; i++)
            if (_inventory[i])
                delete _inventory[i];
        for (int i = 0; i < MAX_INV_SLOTS; i++)
            _inventory[i] = src._inventory[i]->clone();
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
        return ;
    int i = 0;
    for (; i < MAX_INV_SLOTS + 1; i++)
        if (!_inventory[i])
            break;
    if (i > 3)
        return ;
    _inventory[i] = m;
}

//ne doit pas delete la Materia (sujet)
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !_inventory[idx])
        return ;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !_inventory[idx])
        return ;
    _inventory[idx]->use(target);
}