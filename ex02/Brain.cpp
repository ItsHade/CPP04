#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		switch (i % 4) {
			case 0:
				_ideas[i] = "EAT";
				break;
			case 1:
				_ideas[i] = "SLEEP";
				break;
			case 2:
				_ideas[i] = "PLAY";
				break;
			case 3:
				_ideas[i] = "PLEASE PET ME";
				break;
		}
	}
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

Brain & Brain::operator =(Brain const & src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < BRAIN_SIZE; i++)
			_ideas[i] = src._ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(unsigned int nb) const
{
	return (_ideas[nb % BRAIN_SIZE]);
}
