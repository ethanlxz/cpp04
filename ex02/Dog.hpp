#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &oldDog);
		Dog	&operator=(const Dog &oldDog);

		void	makeSound(void) const;
		Brain*	getBrain(void);
		std::string	getIdeas(int i);
	private:
		Brain *BrainPTR;

};