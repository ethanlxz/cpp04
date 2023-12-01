#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &oldCat);
		Cat	&operator=(const Cat &oldCat);

		void	makeSound(void) const;
		Brain*	getBrain(void);
		std::string getIdeas(int i);
	private:
		Brain *BrainPTR;
};