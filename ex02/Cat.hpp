#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

public :

	Cat(void);
	Cat(Cat const & copy);
	~Cat(void);

	Cat & operator =(Cat const & src);

	void makeSound(void) const;
	std::string getType(void) const;
	Brain *getBrain(void) const;

private :

	Brain *_brain;


};

#endif