#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << D_C1 "[Dog] is instanciated with default constructor." RESET << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
	this->_brain = new Brain(*other._brain);
	std::cout << D_C1 "[Dog] is instanciated with copy constructor." RESET << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << D_C1 "[Dog] is destroyed." RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << D_C1 "[Dog] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}

	return *this;
}

void Dog::makeSound(void)
const {
	std::cout << this->type << ": BARK BARK BARK!" << std::endl;
}

Brain*	Dog::getBrain(void)
const {
	return this->_brain;
}
