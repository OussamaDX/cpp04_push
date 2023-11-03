#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
    std::string type;
    public:
    AMateria(AMateria const & other);
    AMateria();
    AMateria(std::string const & type);
    AMateria& operator=(AMateria const & other);
    std::string const & getType() const; //Returns the materia type
    virtual ~AMateria();
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
