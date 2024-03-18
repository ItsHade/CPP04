#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define BRAIN_SIZE 100

class Brain
{

public :

	Brain(void);
	Brain(Brain const & copy);
	virtual ~Brain(void);

	Brain & operator =(Brain const & src);

	std::string getIdea(unsigned int nb) const ;


private :

	std::string _ideas[BRAIN_SIZE];

};

#endif
