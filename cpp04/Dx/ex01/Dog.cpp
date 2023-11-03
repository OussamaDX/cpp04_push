#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    dog_brain = new Brain();
	std::cout << "Dog Default Contructor called" << std::endl;
}

Dog::Dog(const Dog &ob2) : Animal(ob2)
{
    std::cout << "Dog Copy constructor called" << std::endl;
	this->dog_brain = new Brain(*ob2.dog_brain);
	this->type = ob2.type;
}

Dog & Dog::operator=(const Dog &ob2)
{
    delete this->dog_brain;
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
	this->type = ob2.type;
	this->dog_brain = new Brain(*ob2.dog_brain);
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete dog_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "waf waf waf !!" << std::endl;
}