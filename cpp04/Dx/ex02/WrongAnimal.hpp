#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal (const WrongAnimal &a);
    WrongAnimal & operator = (const WrongAnimal &ob2);
    ~WrongAnimal();
    virtual void makeSound()const;
    std::string getType()const;
};

#endif