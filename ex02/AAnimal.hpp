#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

//virtual is used so : const AAnimal * j = new Dog();
//j->makeSound();
//outputs the sound of the dog and not the default AAnimal noise
class AAnimal
{

public :

    AAnimal(void);
    AAnimal(std::string type);
    AAnimal(AAnimal const & copy);
    virtual ~AAnimal(void) = 0;

    AAnimal & operator =(AAnimal const & src);

    virtual void makeSound(void) const;
    virtual std::string getType(void) const;

protected :

    std::string _type;
};

#endif
