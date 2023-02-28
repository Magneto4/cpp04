#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[0] = NULL;
}

Character::~Character()
{
}

void equip(AMateria* m)
{
	for (int i = 0; i < 4; i ++)
	{
		if ()
	}
}