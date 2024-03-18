#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < MAX_MATERIA; i++)
        _materias[i] = NULL;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
    *this = copy;
    return ;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < MAX_MATERIA; i++)
        if (_materias[i])
            delete _materias[i];
    return ;
}

MateriaSource & MateriaSource::operator =(MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < MAX_MATERIA; i++)
            if (_materias[i])
                delete _materias[i];
        for (int i = 0; i < MAX_MATERIA; i++)
            _materias[i] = src._materias[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m == NULL)
        return ;
    int i = 0;
    for (; i < MAX_MATERIA; i++)
        if (!_materias[i])
            break;
    if (i == 3 && _materias[i])
    {
        std::cout << "Can't learn any new Materia!" << std::endl;
        return ;
    }
    _materias[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type != "ice" && type != "cure")
    {
        std::cout << "Unknown Materia!" << std::endl;
        return (NULL);
    }
    int i = 0;
    for (; i < MAX_MATERIA; i++)
    {
        if (_materias[i] && !type.compare(_materias[i]->getType()))
            break;
    }
    if (i == 3 && !_materias[i])
        return (NULL);
    return (_materias[i]->clone());
}

