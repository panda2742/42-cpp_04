#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define A_C1 "\e[48;2;255;100;100m"
# define A_C2 "\e[38;2;255;100;100m"
# define RESET "\e[0m"

/**
 * Represent the Animal class.
 */
class Animal
{
	public:
	/**
	 * The default constructor for the Animal class. Instanciate with 
	 * default values.
	 */
	Animal(void);
	/**
	 * The copy constructor for the Animal class. Instanciate a new class based
	 * on the class reference passed to the constructor.
	 * 
	 * @param other The other instance of the class.
	 */
	Animal(const Animal& other);
	/**
	 * The default destructor for the Animal class.
	 */
	~Animal(void);
	/**
	 * The copy assignment operator for the Animal class. Copy each properties
	 * of the given reference into this instance, and returns a reference to 
	 * this instance.
	 * 
	 * @param other The other instance of the class.
	 */
	Animal& operator=(const Animal& other);
	/**
	 * The animal produces a noise. Call this function trigger this sound.
	 */
	void makeSound(void) const;
	/**
	 * Get the type of the animal.
	 * 
	 * @return The type of the animal.
	 */
	const std::string& getType(void) const;
	/**
	 * Get the sound of the animal.
	 * 
	 * @return The sound of the animal.
	 */
	const std::string& getSound(void) const;
	protected:
	/**
	 * The type of the animal (dog, cat...).
	 */
	std::string	type;
	/**
	 * The sound the animal makes.
	 */
	std::string	sound;
	private:
};

#endif /* ANIMAL_HPP */