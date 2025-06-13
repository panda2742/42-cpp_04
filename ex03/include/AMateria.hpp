#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

/**
 * Represent the AMateria abstract class.
 */
class AMateria
{
	public:
	/**
	 * The default constructor of the class.
	 */
	AMateria(void);
	/**
	 * The string constructor of the class. Take a string and set it as the
	 * instance type.
	 * 
	 * @param type The type to set.
	 */
	AMateria(const std::string& type);
	/**
	 * The copy constructor of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	AMateria(const AMateria& other);
	/**
	 * The default destructor of the class.
	 */
	~AMateria(void);
	/**
	 * The copy assignment operator of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	AMateria& operator=(const AMateria& other);
	/**
	 * *Absolute virtual method noises.*
	 */
	virtual AMateria* clone(void) const = 0;
	/**
	 * Use the given character and print something into the output stream.
	 * 
	 * @param target The target Character interface reference to print.
	 */
	virtual void use(ICharacter& target);
	/**
	 * The type protected attribute getter.
	 * 
	 * @returns The value of the type.
	 */
	const std::string& getType(void);
	protected:
	/**
	 * The type of the instance.
	 */
	std::string	type;
	private:
};

#endif