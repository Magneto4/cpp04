#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice & src) : AMateria(src)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & src)
{
	// std::cout << "Ice assignment operator called" << std::endl;
	(void)src;
	return (*this);
}

Ice* Ice::clone() const
{
	Ice *c = new Ice();
	return (c);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
