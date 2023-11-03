#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
	std::cout << "Animal Default Contructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal Copy Contructor called" << std::endl;
	*this = cpy;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal Copy Assingment operator called" << std::endl;
	if(this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "no Sound specified !!" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}
