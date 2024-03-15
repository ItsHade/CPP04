#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator =(WrongCat const & src)
{
		std::cout << "WrongCat Assignation operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaouu.." << std::endl;
	return ;
}

std::string WrongCat::getType(void) const
{
	return (_type);
}

