#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
	Cure();
	Cure(Cure const &cpy);
	~Cure();
	Cure&operator=(Cure const &cpy);
	AMateria*clone() const;
	void	use(ICharacter& target);
};