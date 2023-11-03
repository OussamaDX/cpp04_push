#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    // std::cout << "Character " << this->name << " created" << std::endl;
}

Character::Character(Character const &other)
{
    *this = other;
}

Character::Character(){}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] != NULL)
        {
            delete inventory[i];
        }
    }
}


void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;            
            // std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl;
            break;
        }
    }
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        // delete this->inventory[idx];
        inventory[idx] = NULL;
        // std::cout << this->name << " is unequiped" << std::endl;
    }
    else
        std::cout << this->name << " can't unequiped" << std::endl;

}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i] != NULL) 
            {
                delete inventory[i];
            }
        }
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i] != NULL)
            {
                inventory[i] = other.inventory[i]->clone();
            }
            else {
                inventory[i] = NULL;
            }
        }
    }
    return *this;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
    {
        inventory[idx]->use(target);
    }
}