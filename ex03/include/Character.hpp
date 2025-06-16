#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

/**
 * Represent the Character class.
 * 
 * @extends ICharacter.
 */
class Character: public ICharacter
{
	public:
	/**
	 * The default constructor of the class.
	 */
	Character(void);
	/**
	 * A string constructor for the Character class. Take the name as parameter.
	 * 
	 * @param name The name of the instance.
	 */
	Character(const std::string& name);
	/**
	 * The copy constructor of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	Character(const Character& other);
	/**
	 * The default destructor of the class.
	 */
	~Character(void);
	/**
	 * The copy assignment operator of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	Character& operator=(const Character& other);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	/**
	 * Returns the name attribute value.
	 * 
	 * @returns The name of the instance.
	 */
	const std::string& getName(void) const;
	private:
	/**
	 * The name of the character.
	 */
	std::string	_name;
	/**
	 * The inventory of 4 slots, which means 4 Materias at most. It is empty at
	 * construction.
	 */
	AMateria*	_inventory[4];
};

#endif