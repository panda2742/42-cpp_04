#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

# define WA_C1 "\e[48;2;255;255;100m"
# define WA_C2 "\e[38;2;255;255;100m"
# define RESET "\e[0m"

/**
 * Represent the Animal class.
 */
class WrongAnimal
{
	public:
	/**
	 * The default constructor for the WrongAnimal class. Instanciate with 
	 * default values.
	 */
	WrongAnimal(void);
	/**
	 * The copy constructor for the WrongAnimal class. Instanciate a new class based
	 * on the class reference passed to the constructor.
	 * 
	 * @param other The other instance of the class.
	 */
	WrongAnimal(const WrongAnimal& other);
	/**
	 * The default destructor for the WrongAnimal class.
	 */
	virtual ~WrongAnimal(void);
	/**
	 * The copy assignment operator for the WrongAnimal class. Copy each properties
	 * of the given reference into this instance, and returns a reference to 
	 * this instance.
	 * 
	 * @param other The other instance of the class.
	 */
	WrongAnimal& operator=(const WrongAnimal& other);
	/**
	 * Shrek does not produce any sound.
	 */
	void makeSound(void) const;
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

#endif