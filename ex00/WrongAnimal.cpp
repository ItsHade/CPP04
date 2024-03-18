#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = copy;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator =(WrongAnimal const & src)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "...random WrongAnimal noise..." << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}
