#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=(Cat const & src)
{
	std::cout << "Cat assignment operator called" << std::endl;
	*(this->_brain) = *(src._brain);
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

