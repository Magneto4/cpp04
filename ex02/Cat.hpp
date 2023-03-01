#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;

public:
	Cat();
	Cat(Cat & src);
	virtual ~Cat();

	Cat &	operator=(Cat const & src);
	virtual void	makeSound() const;
};


#endif