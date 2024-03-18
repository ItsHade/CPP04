#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{

public :

	Cat(void);
	Cat(Cat const & copy);
	virtual ~Cat(void);

	Cat & operator =(Cat const & src);

	void makeSound(void) const;

};

#endif
