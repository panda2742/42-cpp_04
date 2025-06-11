#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

# define WC_C1 "\e[48;2;100;255;255m"
# define WC_C2 "\e[38;2;100;255;255m"

/**
 * Represent the WrongCat class.
 */
class WrongCat: public WrongAnimal
{
	public:
	/**
	 * The default constructor for the WrongCat class. Instanciate with 
	 * default values.
	 */
	WrongCat(void);
	/**
	 * The copy constructor for the WrongCat class. Instanciate a new class based
	 * on the class reference passed to the constructor.
	 * 
	 * @param other The other instance of the class.
	 */
	WrongCat(const WrongCat& other);
	/**
	 * The default destructor for the WrongCat class.
	 */
	virtual ~WrongCat(void);
	/**
	 * The copy assignment operator for the WrongCat class. Copy each properties
	 * of the given reference into this instance, and returns a reference to 
	 * this instance.
	 * 
	 * @param other The other instance of the class.
	 */
	WrongCat& operator=(const WrongCat& other);
	/**
	 * What does a cat do? IT MEOOWWWSSSS.
	 */
	void makeSound(void) const;
	protected:
	private:
};

#endif