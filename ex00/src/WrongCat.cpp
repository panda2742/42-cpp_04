#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << WC_C1 "[WrongCat] is instanciated with default constructor." RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	this->type = other.type;
	std::cout << WC_C1 "[WrongCat] is instanciated with copy constructor." RESET << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << WC_C1 "[WrongCat] is destroyed." RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << WC_C1 "[WrongCat] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void WrongCat::makeSound(void)
const {
	std::cout << this->type << ": MEOW MEOW MEOW!" << std::endl;
}
