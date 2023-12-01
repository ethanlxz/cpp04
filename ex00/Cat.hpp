#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &oldCat);
		Cat	&operator=(const Cat &oldCat);

		void	makeSound(void) const;
};