#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    return ;
}

Ice::Ice(Ice const & copy) : AMateria(copy)
{
    *this = copy;
    return ;
}

Ice::~Ice(void)
{
    return ;
}

Ice & Ice::operator =(Ice const & src)
{
    if (this != &src)
        _type = src._type;
    return (*this);
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}