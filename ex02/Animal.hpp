#pragma once

#include <iostream>

class Animal 
{
	protected:
		std::string type;
	public:
		Animal(void);
		virtual	~Animal(void);
		Animal(const Animal &oldAnimal);
		Animal	&operator=(const Animal &oldAnimal);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};