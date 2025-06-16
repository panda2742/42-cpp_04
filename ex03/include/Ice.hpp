#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

/**
 * Represent the Ice class.
 */
class Ice: public AMateria
{
	public:
	/**
	 * The default constructor of the class.
	 */
	Ice(void);
	/**
	 * The string constructor of the class. Take a string and set it as the
	 * instance type.
	 * 
	 * @param type The type to set.
	 */
	Ice(const std::string& type);
	/**
	 * The copy constructor of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	Ice(const Ice& other);
	/**
	 * The default destructor of the class.
	 */
	~Ice(void);
	/**
	 * The copy assignment operator of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	Ice& operator=(const Ice& other);
	/**
	 * Clone the instance into another one.
	 * 
	 * @returns A new allocated instance.
	 */
	Ice* clone(void) const;
	/**
	 * Use the given character and print something into the output stream.
	 * 
	 * @param target The target Character interface reference to print.
	 */
	void use(ICharacter& target);
};

#endif