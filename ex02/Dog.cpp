#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->BrainPTR = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &oldDog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = oldDog.type;
	this->BrainPTR = new Brain();
	*(this->BrainPTR) = *(oldDog.BrainPTR);
}

Dog	&Dog::operator=(const Dog &oldDog)
{
	std::cout << "Dog copy assignment overload called" << std::endl;
	this->type = oldDog.type;
	*(this->BrainPTR) = *(oldDog.BrainPTR);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Dog sounds*" << std::endl;
}
Brain *Dog::getBrain(void)
{
	return (this->BrainPTR);
}

std::string Dog::getIdeas(int i)
{
	return (this->BrainPTR->ideas[i]);
}