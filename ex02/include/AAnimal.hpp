#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

# define A_C1 "\e[48;2;255;100;100m"
# define A_C2 "\e[38;2;255;100;100m"
# define RESET "\e[0m"

/**
 * Represent the AAnimal class.
 */
class AAnimal
{
	public:
	/**
	 * The default constructor for the AAnimal class. Instanciate with 
	 * default values.
	 */
	AAnimal(void);
	/**
	 * The copy constructor for the AAnimal class. Instanciate a new class based
	 * on the class reference passed to the constructor.
	 * 
	 * @param other The other instance of the class.
	 */
	AAnimal(const AAnimal& other);
	/**
	 * The default destructor for the AAnimal class.
	 */
	virtual ~AAnimal(void);
	/**
	 * The copy assignment operator for the AAnimal class. Copy each properties
	 * of the given reference into this instance, and returns a reference to 
	 * this instance.
	 * 
	 * @param other The other instance of the class.
	 */
	AAnimal& operator=(const AAnimal& other);
	/**
	 * Shrek does not produce any sound.
	 */
	virtual void makeSound(void) const = 0;
	/**
	 * Ehm... Shrek does not have any brain.
	 */
	virtual Brain* getBrain(void) const;
	/**
	 * Get the type of the animal.
	 * 
	 * @return The type of the animal.
	 */
	const std::string& getType(void) const;
	protected:
	/**
	 * The type of the animal (dog, cat...).
	 */
	std::string	type;
	private:
};

#endif /* AAnimal_HPP */