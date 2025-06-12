#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << C_C1 "[Cat] is instanciated with default constructor." RESET << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	this->_brain = new Brain(*other._brain);
	std::cout << C_C1 "[Cat] is instanciated with copy constructor." RESET << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << C_C1 "[Cat] is destroyed." RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << C_C1 "[Cat] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}

	return *this;
}

void Cat::makeSound(void)
const {
	std::cout << this->type << ": MEOW MEOW MEOW!" << std::endl;
}

Brain*	Cat::getBrain(void)
const {
	return this->_brain;
}
