#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat (const WrongCat &a);
    WrongCat & operator = (const WrongCat &ob2);
    void makeSound()const;
};
#endif
