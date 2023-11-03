#include "AMateria.hpp"

AMateria::AMateria() : type("default"){}

AMateria::AMateria(std::string const & type) : type(type){}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria(){}

AMateria::AMateria(AMateria const & other)
{
	*this = other;
}

AMateria& AMateria::operator=(AMateria const & other)
{
	this->type = other.type;
	return (*this);
}

// AMateria* AMateria::clone() const
// {
//     return AMateria(*this);
// }

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}


