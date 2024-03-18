#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria & AMateria::operator =(AMateria const & src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter & target)
{
	(void) target;
	// std::cout << "AMateria used on " << target.getName() << std::endl;
	return ;
}


