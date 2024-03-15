#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Constructor called" << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
	return ;
}

Dog & Dog::operator =(Dog const & src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wooof.." << std::endl;
	return ;
}

std::string Dog::getType(void) const
{
	return (_type);
}

Brain *Dog::getBrain(void) const
{
	return (_brain);
}
