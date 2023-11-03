#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal &ob1);
    Animal &operator=(const Animal &ob1);
    virtual ~Animal();
    virtual void makeSound() const = 0;
    std::string getType()const;
};
#endif