#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal Default Constructor called" << std::endl;
    return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal Constructor called" << std::endl;
    return ;
}

AAnimal::AAnimal(AAnimal const & copy)
{
    std::cout << "AAnimal Copy Constructor called" << std::endl;
    *this = copy;
    return ;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal Destructor called" << std::endl;
    return ;
}

AAnimal & AAnimal::operator =(AAnimal const & src)
{
    std::cout << "AAnimal Assignation operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

void AAnimal::makeSound(void) const
{
    std::cout << "...random AAnimal noise..." << std::endl;
    return ;
}

std::string AAnimal::getType(void) const
{
	return (_type);
}
