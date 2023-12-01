#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oldWrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = oldWrongAnimal.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &oldWrongAnimal)
{
	std::cout << "WrongAnimal copy assignment overload called" << std::endl;
	this->type = oldWrongAnimal.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal sounds*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}