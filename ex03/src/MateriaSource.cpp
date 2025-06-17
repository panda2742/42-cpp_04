#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i])
		{
			delete this->_templates[i];
			this->_templates[i] = NULL;
		}
		this->_templates[i] = other._templates[i];
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_templates[i];
		this->_templates[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_templates[i])
			{
				delete this->_templates[i];
				this->_templates[i] = NULL;
			}
			this->_templates[i] = other._templates[i];
		}
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m) return;

	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i])
			continue;
		this->_templates[i] = m->clone();
		delete m;
		break;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i] && this->_templates[i]->getType() == type)
			return _templates[i]->clone();
	}

	return NULL;
}
