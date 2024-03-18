#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Constructor called" << std::endl;
	_brain = new Brain;
	return ;
}

Dog::Dog(Dog const & copy) : Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	_brain = new Brain;
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
	if (this != &src)
	{
		_type = src.getType();
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wooof.." << std::endl;
	return ;
}

std::string Dog::getIdea(unsigned int nb) const
{
	return (_brain->getIdea(nb));
}