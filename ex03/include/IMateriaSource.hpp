#ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include "AMateria.hpp"
# include <iostream>

/**
 * Represent the IMateriaSource abstract class (interface).
 */
class IMateriaSource
{
	public:
	virtual ~IMateriaSource(void);
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif