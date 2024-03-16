#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
// #include "ICharacter.hpp"

class AMateria
{

protected :

	std::string _type;


public :

	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	~AMateria(void);

	AMateria & operator =(AMateria const & src);

	std::string const & getType(void) const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif
