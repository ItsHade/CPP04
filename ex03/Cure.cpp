#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    return ;
}

Cure::Cure(Cure const & copy) : AMateria(copy)
{
    *this = copy;
    return ;
}

Cure::~Cure(void)
{
    return ;
}

Cure & Cure::operator =(Cure const & src)
{
    if (this != &src)
        _type = src._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}


