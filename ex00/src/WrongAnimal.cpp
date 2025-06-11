#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Shrek")
{
	std::cout << WA_C1 "[WrongAnimal] is instanciated with default constructor." RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << WA_C1 "[WrongAnimal] is instanciated with copy constructor." RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << WA_C1 "[WrongAnimal] is destroyed." RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << WA_C1 "[WrongAnimal] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void WrongAnimal::makeSound(void)
const {
	std::cout << this->type << ": I am Shrek, I don't produce any sound."
		<< std::endl;
}

const std::string& WrongAnimal::getType(void)
const {
	return type;
}
