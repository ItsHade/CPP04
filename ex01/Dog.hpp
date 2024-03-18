#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{

public :

	Dog(void);
	Dog(std::string const & type);
	Dog(Dog const & copy);
	virtual ~Dog(void);

	Dog & operator =(Dog const & src);

	void makeSound(void) const;
	std::string getIdea(unsigned int nb) const;

private :

	Brain *_brain;


};

#endif
