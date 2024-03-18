#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public :

	WrongCat(void);
	WrongCat(WrongCat const & copy);
	~WrongCat(void);

	WrongCat & operator =(WrongCat const & src);

	void makeSound(void) const;

};

#endif
