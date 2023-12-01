#include "Animal.hpp"


Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &oldAnimal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = oldAnimal.type;
}

Animal	&Animal::operator=(const Animal &oldAnimal)
{
	std::cout << "Animal copy assignment overload called" << std::endl;
	this->type = oldAnimal.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "*Animal sounds*" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}