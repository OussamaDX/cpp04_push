#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    ~Ice();
    Ice&operator=(Ice const &obj);
    Ice(Ice const & obj);
    AMateria* clone() const;
	void	use(ICharacter& target);
};
