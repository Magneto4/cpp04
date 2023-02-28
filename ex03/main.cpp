#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>


int	main(void)
{
	AMateria *	ice = new Ice();
	AMateria *	cure = new Cure();
	AMateria *	ice2 = ice->clone();
	AMateria *	cure2 = cure->clone();

	std::cout << "ice2 type " << ice2->getType() << std::endl;
	std::cout << "cure2 type " << cure2->getType() << std::endl;

	delete ice;
	delete ice2;
	delete cure;
	delete cure2;
}