#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
    Dog();
    ~Dog();
    Dog (const Dog &a);
    Dog & operator = (const Dog &ob2);
    void makeSound()const;
    private:
    Brain *dog_brain;
};
#endif