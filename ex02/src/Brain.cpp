#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << B_C1 "[Brain] is instanciated with default constructor." RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	_deepCopyIdeas(other);
	std::cout << B_C1 "[Brain] is instanciated with copy constructor." RESET << std::endl;
}

Brain::~Brain(void)
{
	std::cout << B_C1 "[Brain] is destroyed." RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << B_C1 "[Brain] is copied with assignment operator." RESET << std::endl;

	if (this != &other)
		_deepCopyIdeas(other);

	return *this;
}

void Brain::displayIdeas(std::size_t N, std::size_t P)
{
	if (N > P)
		return;

	if (N != 0)
		std::cout << "\t..." << std::endl;

	while (N < P && N < 99)
	{
		std::cout << "\t[" << &this->_ideas[N] << "] " << N << ". " << this->_ideas[N] << std::endl;
		N++;
	}

	if (P != 99)
		std::cout << "\t..." << std::endl;
}

std::string Brain::getIdea(std::size_t N)
const {
	return _ideas[N % 100];
}

void Brain::setIdea(std::size_t N, std::string content)
{
	this->_ideas[N % 100] = content;
}

void Brain::_deepCopyIdeas(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}
