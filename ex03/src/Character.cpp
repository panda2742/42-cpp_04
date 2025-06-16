#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(const std::string& name)
{
}

Character::Character(const Character& other)
{
}

Character::~Character(void)
{}

Character& Character::operator=(const Character& other)
{
	// if (this != &other)
	// 	this->type = other.type;

	return *this;
}

void Character::equip(AMateria* m)
{}

void Character::unequip(int idx)
{}

void Character::use(int idx, ICharacter& target)
{}

const std::string& Character::getName(void)
const {

}
