#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &oldDog);
		Dog	&operator=(const Dog &oldDog);

		void	makeSound(void) const;
};