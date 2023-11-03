#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
    this->type = "Cat";
	std::cout << "Cat Default Contructor called" << std::endl;
}

Cat::Cat(const Cat &ob2) : Animal(ob2)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = ob2;
}

Cat & Cat::operator = (const Cat &ob2)
{
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
	this->type = ob2.type;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "meow meow meow !" << std::endl;
}