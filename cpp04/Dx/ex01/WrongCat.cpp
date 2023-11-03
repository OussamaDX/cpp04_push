#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
	std::cout << "WrongCat Default Contructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ob2) : WrongAnimal(ob2)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = ob2;
}

WrongCat & WrongCat::operator = (const WrongCat &ob2)
{
    std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
	this->type = ob2.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "meow meow meow !" << std::endl;
}