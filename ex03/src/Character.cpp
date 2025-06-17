#include "Character.hpp"

Character::Character(void): _name("Shrek")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string& name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	this->_name = other._name;

	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other._name;

		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i];
		}
	}

	return *this;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			continue;
		this->_inventory[i] = m;
		break;
	}
}

void Character::unequip(int idx)
{
	this->_inventory[idx % 4] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx % 4])
		this->_inventory[idx % 4]->use(target);
}

const std::string& Character::getName(void)
const {
	return _name;
}
