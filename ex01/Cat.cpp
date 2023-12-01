#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->BrainPTR = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &oldCat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = oldCat.type;
	this->BrainPTR = new Brain();
	*(this->BrainPTR) = *(oldCat.BrainPTR);
}

Cat	&Cat::operator=(const Cat &oldCat)
{
	std::cout << "Cat copy assignment overload called" << std::endl;
	this->type = oldCat.type;
	*(this->BrainPTR) = *(oldCat.BrainPTR);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Cat sounds*" << std::endl;
}

Brain *Cat::getBrain(void)
{
	return (this->BrainPTR);
}

std::string Cat::getIdeas(int i)
{
	return (this->BrainPTR->ideas[i]);
}