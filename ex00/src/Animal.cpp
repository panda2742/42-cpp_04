#include "Animal.hpp"

Animal::Animal(void): type("Shrek"), sound("SHREK SHREK SHREK")
{
	std::cout << A_C1 "[Animal] is instanciated with default constructor." RESET << std::endl;
}

Animal::Animal(const Animal& other): 
	type(other.type),
	sound(other.sound)
{
	std::cout << A_C1 "[Animal] is instanciated with copy constructor." RESET << std::endl;
}

Animal::~Animal(void)
{
	std::cout << A_C1 "[Animal] is destroyed." RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << A_C1 "[Animal] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
		this->sound = other.sound;
	}

	return *this;
}

void Animal::makeSound(void)
const {
	std::cout << this->type << ": " << this->sound << std::endl;
}

const std::string& Animal::getType(void)
const {
	return type;
}

const std::string& Animal::getSound(void)
const {
	return sound;
}
