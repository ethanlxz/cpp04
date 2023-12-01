#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &oldWrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = oldWrongCat.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &oldWrongCat)
{
	std::cout << "WrongCat copy assignment overload called" << std::endl;
	this->type = oldWrongCat.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "*WrongCat sounds*" << std::endl;
}