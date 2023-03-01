#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	// {
	// 	Animal a;
	// }
	{
		std::cout << "Test of cat assignment" << std::endl << std::endl;
		const Cat* i = new Cat();
		Cat*	j = new Cat();
		*j = *i;
		delete i;
		delete j;
		std::cout << std::endl;
	}
	{
		std::cout << "Test of dog assignment" << std::endl << std::endl;
		const Dog* i = new Dog();
		Dog*	j = new Dog();
		*j = *i;
		delete i;
		delete j;
		std::cout << std::endl;
	}
	Animal*	array[8];
	for (int i = 0; i < 8; i++)
	{
		if (i < 4)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i < 8; i++)
		array[i]->makeSound();
	for (int i = 0; i < 8; i++)
		delete array[i];
}
