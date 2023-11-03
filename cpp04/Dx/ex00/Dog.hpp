#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    ~Dog();
    Dog (const Dog &a);
    Dog & operator = (const Dog &ob2);
    void makeSound()const;
};

#endif