#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"


class AAnimal
{

public :

    AAnimal(void);
    AAnimal(std::string type);
    AAnimal(AAnimal const & copy);
    virtual ~AAnimal(void);

    AAnimal & operator =(AAnimal const & src);

    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
    void    setType(std::string type);

protected :

    std::string _type;
};

#endif
