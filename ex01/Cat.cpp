#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
	_brain = new Brain;
	return ;
}

Cat::Cat(Cat const & copy) : Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	_brain = new Brain;
	*this = copy;
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
	if (this != &src)
	{
		_type = src.getType();
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaouu.." << std::endl;
	return ;
}

std::string Cat::getIdea(unsigned int nb) const
{
	return (_brain->getIdea(nb));
}