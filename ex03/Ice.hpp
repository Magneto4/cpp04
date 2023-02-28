#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	 Ice : public AMateria
{
public:
	Ice();
	Ice(Ice & src);
	virtual ~Ice();

	virtual Ice & operator=(Ice const & src);
	virtual Ice* clone() const;
	// virtual void use(ICharacter& target);
};

#endif