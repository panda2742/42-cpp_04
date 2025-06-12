#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

# define C_C1 "\e[48;2;100;255;100m"
# define C_C2 "\e[38;2;100;255;100m"

/**
 * Represent the Cat class.
 * 
 * @extends AAnimal
 */
class Cat: public AAnimal
{
	public:
	/**
	 * The default constructor for the Cat class. Instanciate with default 
	 * values.
	 */
	Cat(void);
	/**
	 * The copy constructor for the Cat class. Instanciate a new class based 
	 * on the class reference passed to the constructor.
	 * 
	 * @param other THe other instance of the class.
	 */
	Cat(const Cat& other);
	/**
	 * The default destructor for the Cat class.
	 */
	~Cat(void);
	/**
	 * The copy assignment operator for the Cat class. Copy each properties of
	 * the given reference into this instance, and returns a reference to this
	 * instance.
	 * 
	 * @param other The other instance of the class.
	 */
	Cat& operator=(const Cat& other);
	/**
	 * What does a cat do? IT MEOOWWWSSSS.
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

#endif /* CAT_HPP */