#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

class AMateria;

/**
 * Represent the ICharacter abstract class (interface).
 */
class ICharacter
{
	public:
	virtual ~ICharacter(void);
	virtual const std::string& getName(void) const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	protected:
	private:
};

#endif /* ICHARACTER_HPP */