#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << B_C1 "[Brain] is instanciated with default constructor." RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	(void)other; // TODO
	std::cout << B_C1 "[Brain] is instanciated with copy constructor." RESET << std::endl;
}

Brain::~Brain(void)
{
	std::cout << B_C1 "[Brain] is destroyed." RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << B_C1 "[Brain] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		// TODO
	}

	return *this;
}
