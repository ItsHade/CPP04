#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MAX_MATERIA 4

class AMateria;

class MateriaSource : public IMateriaSource
{

private :

    AMateria *_materias[MAX_MATERIA];
    
public :

    MateriaSource(void);
    MateriaSource(MateriaSource const & copy);
    ~MateriaSource(void);

    MateriaSource & operator =(MateriaSource const & src);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif