#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
    Brain *cat_brain;
    public:
    Cat();
    ~Cat();
    Cat (const Cat &a);
    Cat & operator = (const Cat &ob2);
    void makeSound()const;
};
#endif