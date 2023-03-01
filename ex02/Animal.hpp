#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(Animal & src);
	virtual ~Animal();

	Animal &	operator=(Animal const & src);
	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif