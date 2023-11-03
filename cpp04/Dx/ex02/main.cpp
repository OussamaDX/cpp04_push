#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{    
    Cat A;
    Dog B;
    Animal* C = new Cat();

    A.makeSound();
    B.makeSound();
    if (C)
    {
        C->makeSound();
    }
    else
    {
        std::cout << "C is nullptr" << std::endl;
    }
    delete C;
    return 0;
}