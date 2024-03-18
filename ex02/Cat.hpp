#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"

class Cat : public AAnimal
{

public :

	Cat(void);
	Cat(Cat const & copy);
	virtual ~Cat(void);

	Cat & operator =(Cat const & src);

	void makeSound(void) const;
	std::string getIdea(unsigned int nb) const;

private :

	Brain *_brain;
};

#endif
