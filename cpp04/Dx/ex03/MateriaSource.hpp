#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
    AMateria* materias[4];
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource( MateriaSource const & other);
    void learnMateria(AMateria*);
    MateriaSource&  operator=( MateriaSource const & other);
    AMateria* createMateria(std::string const & type);
};
