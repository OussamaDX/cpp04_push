#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    ~Cat();
    Cat (const Cat &a);
    Cat & operator = (const Cat &ob2);
    void makeSound()const;
};
#endif