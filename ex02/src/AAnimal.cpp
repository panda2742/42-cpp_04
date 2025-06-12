#include "AAnimal.hpp"
#include "Brain.hpp"

AAnimal::AAnimal(void): type("Shrek")
{
	std::cout << A_C1 "[AAnimal] is instanciated with default constructor." RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& other): type(other.type)
{
	std::cout << A_C1 "[AAnimal] is instanciated with copy constructor." RESET << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << A_C1 "[AAnimal] is destroyed." RESET << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << A_C1 "[AAnimal] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void AAnimal::makeSound(void)
const {
	std::cout << this->type << ": I am Shrek, I don't produce any sound."
		<< std::endl;
}

const std::string& AAnimal::getType(void)
const {
	return type;
}

Brain*	AAnimal::getBrain(void)
const {
	return NULL;
}

