#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define D_C1 "\e[48;2;100;100;255m"
# define D_C2 "\e[38;2;100;100;255m"

/**
 * Represent the Dog class.
 * 
 * @extends Animal
 */
class Dog: public Animal
{
	public:
	/**
	 * The default constructor for the Dog class. Instanciate with default 
	 * values.
	 */
	Dog(void);
	/**
	 * The copy constructor for the Dog class. Instanciate a new class based 
	 * on the class reference passed to the constructor.
	 * 
	 * @param other THe other instance of the class.
	 */
	Dog(const Dog& other);
	/**
	 * The default destructor for the Animal class.
	 */
	~Dog(void);
	/**
	 * The copy assignment operator for the Dog class. Copy each properties of
	 * the given reference into this instance, and returns a reference to this
	 * instance.
	 * 
	 * @param other The other instance of the class.
	 */
	Dog& operator=(const Dog& other);
	/**
	 * What does a dog do? IT BAARRRKSSSS.
	 */
	void makeSound(void) const;
	/**
	 * Get a the pointer of the animal brain.
	 * 
	 * @returns The animal brain.
	 */
	Brain* getBrain(void) const;
	protected:
	private:
	/**
	 * The brain of this animal.
	 */
	Brain*	_brain;
};

#endif /* Dog_HPP */