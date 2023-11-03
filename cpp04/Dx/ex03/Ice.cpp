#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice&Ice::operator=(Ice const &obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Ice::Ice(Ice const & other) : AMateria("ice")
{
    *this = other;
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}