#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Contructor called" << std::endl;
}

Brain::Brain(const Brain &ob2)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = ob2;
}

Brain & Brain::operator = (const Brain &ob2)
{
    std::cout << "Brain Copy Assignment Operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
        this->ideas[i] = ob2.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}