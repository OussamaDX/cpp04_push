#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure&Cure::operator=(Cure const &obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Cure::Cure(Cure const & other) : AMateria("cure")
{
    *this = other;
}

Cure::~Cure(){}


AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}