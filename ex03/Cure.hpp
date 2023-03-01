#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	 Cure : public AMateria
{
public:
	Cure();
	Cure(Cure & src);
	virtual ~Cure();

	virtual Cure & operator=(Cure const & src);
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif