#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
	std::cout << "Dog Default Contructor called" << std::endl;
}

Dog::Dog(const Dog &ob2): Animal(ob2)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = ob2;
}

Dog & Dog::operator = (const Dog &ob2)
{
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
	this->type = ob2.type;
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "waf waf waf !!" << std::endl;
}