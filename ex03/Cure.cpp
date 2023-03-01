#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure & src) : AMateria(src)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & src)
{
	// std::cout << "Cure assignment operator called" << std::endl;
	(void)src;
	return (*this);
}

Cure* Cure::clone() const
{
	Cure *c = new Cure();
	return (c);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
