#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria of type " << _type << " created" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
	std::cout << "AMateria of type " << _type << " copied" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria of type " << _type << " destroyed" << std::endl;
	return ;
}

AMateria & AMateria::operator =(AMateria const & src)
{
	_type = src._type;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter & target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
	return ;
}


