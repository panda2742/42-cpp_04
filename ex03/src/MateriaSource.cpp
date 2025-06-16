#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
}

MateriaSource::~MateriaSource(void)
{}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	// if (this != &other)
	// 	this->type = other.type;

	return *this;
}

void MateriaSource::learnMateria(AMateria*)
{}

AMateria* MateriaSource::createMateria(const std::string& type)
{}
