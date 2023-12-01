
#pragma once

#include <iostream>

class WrongAnimal 
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		virtual	~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &oldWrongAnimal);
		WrongAnimal	&operator=(const WrongAnimal &oldWrongAnimal);

		void	makeSound(void) const;
		std::string		getType(void) const;
};