#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


// int main()
// {
// 	//creating the source of materia
// 	IMateriaSource* src = new MateriaSource();

// 	//source is learning new materia
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	src->learnMateria(new Cure());
// 	src->learnMateria(new Cure());

// 	//creating character called me and a tmp AMateria
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;

// 	//checking equip
// 	std::cout << "--------------------" << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	me->equip(tmp);
// 	me->equip(tmp);
// 	me->equip(tmp);
// 	std::cout << "--------------------" << std::endl;
	
// 	//checking unequip
// 	me->unequip(0);
// 	me->unequip(1);
// 	me->unequip(2);
// 	me->unequip(3);
// 	AMateria *tmp2;
// 	tmp2 = src->createMateria("ice");
// 	me->equip(tmp2);
// 	me->unequip(0);

// 	std::cout << "--------------------" << std::endl;
// 	//checking use
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->equip(tmp);
// 	me->use(1, *bob);
// 	std::cout << "--------------------" << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}