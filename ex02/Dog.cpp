#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	*(this->_brain) = *(src._brain);
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
