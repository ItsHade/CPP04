#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

public :

	Brain(void);
	Brain(Brain const & copy);
	~Brain(void);

	Brain & operator =(Brain const & src);


private :

	std::string *_ideas;


};

#endif
