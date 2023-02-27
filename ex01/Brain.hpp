#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain & src);
	~Brain();

	Brain &	operator=(Brain const & src);
};

#endif