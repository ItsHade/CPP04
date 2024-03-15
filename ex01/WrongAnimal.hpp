#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{

public :

    WrongAnimal(void);
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const & copy);
    virtual ~WrongAnimal(void);

    WrongAnimal & operator =(WrongAnimal const & src);

    void makeSound(void) const;
    std::string getType(void) const;

protected :

    std::string _type;
};

#endif
