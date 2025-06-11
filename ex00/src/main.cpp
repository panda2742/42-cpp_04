#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal*	whoAmI = new Animal();
		const Cat*		imACat = new Cat();
		const Dog*		imADog = new Dog();

		std::cout << whoAmI->getType() << std::endl;
		std::cout << imACat->getType() << std::endl;
		std::cout << imADog->getType() << std::endl;

		whoAmI->makeSound();
		imACat->makeSound();
		imADog->makeSound();

		delete whoAmI;
		delete imACat;
		delete imADog;
	}
	std::cout << std::endl << std::endl;
	{
		const WrongAnimal*	whoAmI;
		const WrongCat*		imACat = new WrongCat();

		whoAmI = imACat;

		std::cout << whoAmI->getType() << std::endl;
		std::cout << imACat->getType() << std::endl;

		whoAmI->makeSound();
		imACat->makeSound();

		delete imACat;
	}
}
