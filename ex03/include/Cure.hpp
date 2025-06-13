#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

/**
 * Represent the Cure class.
 */
class Cure: public AMateria
{
	public:
	/**
	 * The default constructor of the class.
	 */
	Cure(void);
	/**
	 * The string constructor of the class. Take a string and set it as the
	 * instance type.
	 * 
	 * @param type The type to set.
	 */
	Cure(const std::string& type);
	/**
	 * The copy constructor of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	Cure(const Cure& other);
	/**
	 * The default destructor of the class.
	 */
	~Cure(void);
	/**
	 * The copy assignment operator of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	Cure& operator=(const Cure& other);
	/**
	 * *Absolute virtual method noises.*
	 */
	Cure* clone(void) const;
	/**
	 * Use the given character and print something into the output stream.
	 * 
	 * @param target The target Character interface reference to print.
	 */
	void use(ICharacter& target);
};

#endif