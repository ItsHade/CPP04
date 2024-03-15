#include "Brain.hpp"

Brain::Brain(void)
{
	_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "The best idea ever";
	}
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	delete [] _ideas;
	return ;
}

Brain & Brain::operator =(Brain const & src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	return (*this);
}


