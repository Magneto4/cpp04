#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "undefinied";
}

Animal::Animal(Animal & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & src)
{
	std::cout << "Animal assignment operator called" << std::endl;
	(void)src;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

