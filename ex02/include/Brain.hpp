#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define B_C1 "\e[48;2;255;255;100m"
# define B_C2 "\e[38;2;255;255;100m"
# define RESET "\e[0m"

/**
 * Represent the Brain class.
 */
class Brain
{
	public:
	/**
	 * The default constructor for the Brain class. Instanciate with 
	 * default values.
	 */
	Brain(void);
	/**
	 * The copy constructor for the Brain class. Instanciate a new class based
	 * on the class reference passed to the constructor.
	 * 
	 * @param other The other instance of the class.
	 */
	Brain(const Brain& other);
	/**
	 * The default destructor for the Brain class.
	 */
	virtual ~Brain(void);
	/**
	 * The copy assignment operator for the Brain class. Copy each properties
	 * of the given reference into this instance, and returns a reference to 
	 * this instance.
	 * 
	 * @param other The other instance of the class.
	 */
	Brain& operator=(const Brain& other);
	/**
	 * Display N to P ideas of the ideas list.
	 * 
	 * @param N The first index.
	 * @param P the second index.
	 */
	void displayIdeas(std::size_t N, std::size_t P);
	/**
	 * Get an idea from the list.
	 * 
	 * @param N the position of the idea.
	 * @param content The string containing the idea.
	 */
	std::string getIdea(std::size_t N) const;
	/**
	 * Set an idea of the list.
	 * 
	 * @param N the position of the idea.
	 * @returns The string containing the idea.
	 */
	void setIdea(std::size_t N, std::string content);
	protected:
	private:
	/**
	 * The array of ideas.
	 */
	std::string	_ideas[100];
	/**
	 * Deep copy all the ideas from the other instance.
	 * 
	 * @param other The other instance to get the ideas from.
	 */
	void _deepCopyIdeas(const Brain& other);
};

#endif