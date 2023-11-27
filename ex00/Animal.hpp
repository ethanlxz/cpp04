#pragma once

class Animal 
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &oldAnimal);
		Animal	&operator=(const Animal &oldAnimal);
		virtual	~Animal(void);

		virtual void	makeSound(void);
		std::string		getType(void);



};