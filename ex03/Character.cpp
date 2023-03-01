#include "Character.hpp"
#include <iostream>

Character::Character()
{
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		_inventory[0] = NULL;
}

Character::Character(std::string const & name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[0] = NULL;
}

Character::Character(Character & src)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character & Character::operator=(Character const & src)
{
	std::cout << "here\n";
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
