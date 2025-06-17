#include "AMateria.hpp"

AMateria::AMateria(void): type("dark_matter")
{}

AMateria::AMateria(const std::string& type): type(type)
{}

AMateria::AMateria(const AMateria& other): type(other.type)
{}

AMateria::~AMateria(void)
{}

AMateria& AMateria::operator=(const AMateria& other)
{
	(void)other;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "Help! You cannot execute me." << std::endl;
}

const std::string& AMateria::getType(void)
{
	return this->type;
}
