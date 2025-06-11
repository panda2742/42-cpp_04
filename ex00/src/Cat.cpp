#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->sound = "MEOW MEOW MEOW";
	std::cout << C_C1 "[Cat] is instanciated with default constructor." RESET << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	this->sound = other.sound;
	std::cout << C_C1 "[Cat] is instanciated with copy constructor." RESET << std::endl;
}

Cat::~Cat(void)
{
	std::cout << C_C1 "[Cat] is destroyed." RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << C_C1 "[Cat] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
		this->sound = other.sound;
	}

	return *this;
}
