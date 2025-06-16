#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

/**
 * Represent the MateriaSource class.
 * 
 * @extends IMateriaSource
 */
class MateriaSource: public IMateriaSource
{
	public:
	/**
	 * The default constructor of the class.
	 */
	MateriaSource(void);
	/**
	 * The copy constructor of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	MateriaSource(const MateriaSource& other);
	/**
	 * The default destructor of the class.
	 */
	~MateriaSource(void);
	/**
	 * The copy assignment operator of the class.
	 * 
	 * @param other The other instance to copy data from.
	 */
	MateriaSource& operator=(const MateriaSource& other);
	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string& type);
};

#endif