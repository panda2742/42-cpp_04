#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

# define TEST_SIZE 4
# define DEBUG_C1 "\e[38;2;150;10;255m"

void printAnimal(Animal *animal)
{
	std::cout << "Animal\t" << animal << "\t[" << animal->getType() << "]" << std::endl;
	std::cout << "\t.type=" << animal->getType() << std::endl;
	std::cout << "\t.brain=" << animal->getBrain() << std::endl;
	animal->getBrain()->displayIdeas(0, 10);
	std::cout << std::endl;
}

int main(void)
{
	Animal*	herd[TEST_SIZE];

	std::cout << DEBUG_C1 "----- ➙ Creating the animals... ----------" RESET << std::endl;

	for (std::size_t i = 0; i < TEST_SIZE / 2; i++)
		herd[i] = new Dog();

	for (std::size_t i = TEST_SIZE / 2; i < TEST_SIZE; i++)
		herd[i] = new Cat();

	std::cout << DEBUG_C1 "----- ➙ Displaying the animals... ----------" RESET << std::endl;

	for (std::size_t i = 0; i < TEST_SIZE; i++)
		printAnimal(herd[i]);

	std::cout << DEBUG_C1 "----- ➙ Deleting the animals... ----------" RESET << std::endl;

	for (std::size_t i = 0; i < TEST_SIZE; i++)
		delete herd[i];

	std::cout << DEBUG_C1 "----- ➙ We duplicate a dog... ----------" RESET << std::endl;

	std::cout << DEBUG_C1 "➙ DOG FRAUD1" RESET << std::endl;
	Dog*	fraud1 = new Dog();
	fraud1->getBrain()->setIdea(0, "I AM FRAUD 1");
	printAnimal(fraud1);

	std::cout << DEBUG_C1 "➙ DOG FRAUD2" RESET << std::endl;
	Animal*	fraud2 = new Dog(*fraud1);
	printAnimal(fraud2);
	fraud2->getBrain()->setIdea(0, "I AM FRAUD 2");
	std::cout << DEBUG_C1 "➙ DOG FRAUD2 AFTER EDIT" RESET << std::endl;
	printAnimal(fraud2);
	std::cout << DEBUG_C1 "➙ DOG FRAUD1 AFTER FRAUD2 EDIT" RESET << std::endl;
	printAnimal(fraud1);

	delete fraud1;
	delete fraud2;

	std::cout << DEBUG_C1 "----- ➙ We duplicate a cat... ----------" RESET << std::endl;

	std::cout << DEBUG_C1 "➙ CAT FRAUD1" RESET << std::endl;
	Cat*	fraud3 = new Cat();
	fraud3->getBrain()->setIdea(0, "I AM FRAUD 3");
	printAnimal(fraud3);

	std::cout << DEBUG_C1 "➙ CAT FRAUD4" RESET << std::endl;
	Animal*	fraud4 = new Cat(*fraud3);
	printAnimal(fraud4);
	fraud4->getBrain()->setIdea(0, "I AM FRAUD 4");
	std::cout << DEBUG_C1 "➙ CAT FRAUD4 AFTER EDIT" RESET << std::endl;
	printAnimal(fraud4);
	std::cout << DEBUG_C1 "➙ CAT FRAUD3 AFTER FRAUD4 EDIT" RESET << std::endl;
	printAnimal(fraud3);

	delete fraud3;
	delete fraud4;
}
