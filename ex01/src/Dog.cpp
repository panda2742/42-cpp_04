#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << D_C1 "[Dog] is instanciated with default constructor." RESET << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
	std::cout << D_C1 "[Dog] is instanciated with copy constructor." RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << D_C1 "[Dog] is destroyed." RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << D_C1 "[Dog] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void Dog::makeSound(void)
const {
	std::cout << this->type << ": BARK BARK BARK!" << std::endl;
}
