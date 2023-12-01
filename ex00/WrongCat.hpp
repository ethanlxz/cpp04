#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &oldWrongCat);
		WrongCat	&operator=(const WrongCat &oldWrongCat);

		void	makeSound(void) const;
};