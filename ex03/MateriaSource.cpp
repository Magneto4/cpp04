#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	for (int i = 0; i < 4; i ++)
	{
		if (src._learnt[i])
			this->_learnt[i] = src._learnt[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_learnt[i] == NULL)
		{
			this->_learnt[i] = m;
			return ;
		}
	}
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnt[i]->getType().compare(type) == 0)
			return (this->_learnt[i]->clone());
	}
	return (0);
}