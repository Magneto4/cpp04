#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class AMateria
{
protected:
	std::string _type;

public:
	AMateria(std::string const & type);
	AMateria(AMateria & src);
	virtual ~AMateria();

	virtual AMateria & operator=(AMateria const & src);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	// virtual void use(ICharacter& target);
};

#endif