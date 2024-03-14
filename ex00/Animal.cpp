#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default Constructor called" << std::endl;
    return ;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Constructor called" << std::endl;
    return ;
}

Animal::Animal(Animal const & copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
    return ;
}

Animal & Animal::operator =(Animal const & src)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

void makeSound(void) const
{
    std::cout << "Animal is making noise!" << std::endl;
    return ;
}

