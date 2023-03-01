#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & src)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}