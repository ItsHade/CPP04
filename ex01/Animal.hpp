#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

//virtual is used so : const Animal * j = new Dog();
//j->makeSound();
//outputs the sound of the dog and not the default animal noise
class Animal
{

public :

    Animal(void);
    Animal(std::string type);
    Animal(Animal const & copy);
    virtual ~Animal(void);

    Animal & operator =(Animal const & src);

    virtual void makeSound(void) const;
    virtual std::string getType(void) const;

protected :

    std::string _type;
};

#endif
