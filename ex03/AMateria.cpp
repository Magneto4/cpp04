#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	// std::cout << "AMateria constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(AMateria & src)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	// std::cout << "AMateria assignment operator called" << std::endl;
	(void)src;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}
