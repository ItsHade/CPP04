#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
	_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & copy) : AAnimal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
	return ;
}

Cat & Cat::operator =(Cat const & src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	_type = src._type;
	if (_brain)
		delete (_brain);
	_brain = new Brain(*(src._brain));
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaouu.." << std::endl;
	return ;
}

std::string Cat::getType(void) const
{
	return (_type);
}

Brain *Cat::getBrain(void) const
{
	return (_brain);
}
