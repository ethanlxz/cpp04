#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &oldDog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = oldDog.type;
}

Dog	&Dog::operator=(const Dog &oldDog)
{
	std::cout << "Dog copy assignment overload called" << std::endl;
	this->type = oldDog.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Dog sounds*" << std::endl;
}