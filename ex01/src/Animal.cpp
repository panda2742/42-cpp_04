#include "Animal.hpp"

Animal::Animal(void): type("Shrek")
{
	std::cout << A_C1 "[Animal] is instanciated with default constructor." RESET << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
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
	}

	return *this;
}

void Animal::makeSound(void)
const {
	std::cout << this->type << ": I am Shrek, I don't produce any sound."
		<< std::endl;
}

const std::string& Animal::getType(void)
const {
	return type;
}
