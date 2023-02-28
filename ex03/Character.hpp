#include "ICharacter.hpp"

class Character
{
private:
	std::string	_name;
	AMateria	*_inventory[4];

public:
	Character(std::string const & name);
	~Character();
};

