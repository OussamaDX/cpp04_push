#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
    this->type = "Cat";
    cat_brain = new Brain();
	std::cout << "Cat Default Contructor called" << std::endl;
}

Cat::Cat(const Cat &ob2) : Animal(ob2)
{
    std::cout << "Cat Copy constructor called" << std::endl;
	this->cat_brain = NULL;
    this->type = ob2.type;
}

Cat & Cat::operator =(const Cat &ob2)
{
    delete this->cat_brain;
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
	this->type = ob2.type;
	this->cat_brain = new Brain(*ob2.cat_brain);
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete cat_brain;
}

void Cat::makeSound(void) const
{
    std::cout << "meow meow meow !" << std::endl;
}