#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
	std::cout << "WrongAnimal Default Contructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "no Sound specified !!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ob2)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = ob2;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &ob2)
{
    std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;
	this->type = ob2.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}
