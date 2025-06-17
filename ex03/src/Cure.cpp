#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(const std::string& type)
{
	this->type = type;
}

Cure::Cure(const Cure& other)
{
	this->type = other.type;
}

Cure::~Cure(void)
{}

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	return *this;
}

Cure* Cure::clone(void)
const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
