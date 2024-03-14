#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{

public :

    Animal(void);
    Animal(std::string type);
    Animal(Animal const & copy);
    ~Animal(void);

    Animal & operator =(Animal const & src);

    virtual void makeSound(void) const;
    std::string getType(void) const;

protected :

    std::string _type;
};

#endif