#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(const std::string& type)
{
	this->type = type;
}

Ice::Ice(const Ice& other)
{
	this->type = other.type;
}

Ice::~Ice(void)
{}

Ice& Ice::operator=(const Ice& other)
{
	(void)other;
	return *this;
}

Ice* Ice::clone(void)
const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
