#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &oldCat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = oldCat.type;
}

Cat	&Cat::operator=(const Cat &oldCat)
{
	std::cout << "Cat copy assignment overload called" << std::endl;
	this->type = oldCat.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Cat sounds*" << std::endl;
}