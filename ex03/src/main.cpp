#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main(void)
{
	{
		std::cout << "\e[48;2;0;120;220mTEST 1: MateriaSource learning and creation\e[0m\n";

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		// Devrait créer une nouvelle copie de Ice
		AMateria* m1 = src->createMateria("ice");
		std::cout << (m1 ? "Materia 'ice' created\n" : "Failed to create 'ice'\n");

		// Devrait créer une nouvelle copie de Cure
		AMateria* m2 = src->createMateria("cure");
		std::cout << (m2 ? "Materia 'cure' created\n" : "Failed to create 'cure'\n");

		// Type inconnu -> doit retourner 0
		AMateria* m3 = src->createMateria("fire");
		std::cout << (m3 ? "Materia 'fire' created (error!)\n" : "Unknown materia type handled correctly\n");

		delete src;
		delete m1;
		delete m2;
		// m3 est nul, pas besoin de delete
	}
	{
		std::cout << "\e[48;2;0;120;220mTEST 2: Character equip and use\e[0m\n";

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* ice = src->createMateria("ice");
		AMateria* cure = src->createMateria("cure");

		me->equip(ice);
		me->equip(cure);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob); // utilise Ice sur Bob
		me->use(1, *bob); // utilise Cure sur Bob

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\e[48;2;0;120;220mTEST 3: Equip overflow (max 4 materias)\e[0m\n";

		Character ch("OverflowTest");
		AMateria* m[5] = {
			new Ice(), new Cure(), new Ice(), new Cure(), new Ice()
		};

		for (int i = 0; i < 5; ++i)
			ch.equip(m[i]); // le 5e ne sera pas équipé

		// On teste que l'utilisation de slot 4 (hors limites) ne fait rien
		ch.use(4, ch); // doit ne rien faire

		// Nettoyage manuel pour éviter les fuites (le 5e n’a pas été pris en charge)
		delete m[4];
	}
	{
		std::cout << "\e[48;2;0;120;220mTEST 4: Unequip doesn't delete\e[0m\n";

		Character ch("UnequipTest");
		AMateria* m = new Ice();

		ch.equip(m);
		ch.unequip(0); // ne delete PAS

		// Si tu veux gérer à part :
		delete m; // à faire manuellement si besoin
	}
	{
		std::cout << "\e[48;2;0;120;220mTEST 5: Character deep copy\e[0m\n";
	
		AMateria*	ice = new Ice();
		AMateria*	cure = new Cure();
		Character original("Original");
		original.equip(ice);
		original.equip(cure);
	
		Character copy(original);
	
		// Les pointeurs doivent être différents (deep copy)
		original.use(0, copy);
		copy.use(0, original);
	
		// On vérifie que modifier l’un n’affecte pas l’autre
		original.unequip(0);
		copy.use(0, original); // doit toujours marcher si deep copy ok

		delete ice;
		// delete cure;
	}
	return 0;
}
