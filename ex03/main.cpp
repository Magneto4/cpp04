#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include "Character.hpp"

int	main(void)
{
	// {
	// 	AMateria *	ice = new Ice();
	// 	AMateria *	cure = new Cure();
	// 	AMateria *	ice2 = ice->clone();
	// 	AMateria *	cure2 = cure->clone();

	// 	std::cout << "ice2 type " << ice2->getType() << std::endl;
	// 	std::cout << "cure2 type " << cure2->getType() << std::endl;

	// 	delete ice;
	// 	delete ice2;
	// 	delete cure;
	// 	delete cure2;
	// }
	// {
	// 	ICharacter *	c1 = new Character("Scott");
	// 	ICharacter *	c2 = new Character("David");
	// 	AMateria *	tmp = new Cure();
	// 	c1->equip(tmp);
	// 	c1->equip(new Cure());
	// 	c1->equip(new Cure());
	// 	c1->equip(new Cure());
	// 	c1->use(0, *c2);
	// 	c1->unequip(0);
	// 	c1->use(0, *c2);
	// 	c1->equip(tmp);
	// 	// c1->use(0, *c2);
	// 	ICharacter *	c3 = new Character(*(Character *)c1);
	// 	std::cout << "c1 name is " << c1->getName() << std::endl;
	// 	std::cout << "c2 name is " << c2->getName() << std::endl;
	// 	std::cout << "c3 name is " << c3->getName() << std::endl;

	// 	delete c1;
	// 	c3->use(0, *c2);
	// 	delete c2;
	// 	delete c3;
	// }
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
}