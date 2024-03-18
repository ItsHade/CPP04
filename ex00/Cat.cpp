#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat & Cat::operator =(Cat const & src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this != &src)
		_type = src.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaouu.." << std::endl;
	return ;
}
