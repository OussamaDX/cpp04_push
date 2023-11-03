#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main(void)
{
    Animal *a[10];
    int i = 0;
    while (i < 10)
    {
        a[i] = new Dog();
        i++;
        if (i == 5)
        {
            while (i < 10)
            {
                a[i] = new Cat(); 
                i++;
            }
        }
    }
    for (int i = 0; i < 10 ; i++)
    {
        std::cout << a[i]->getType() << std::endl;
    }
    for (int i = 0; i < 10 ; i++)
    {
        delete a[i];
    }
    return 0;
}