#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &oldCure)
{
	this->type = oldCure.type;
	*this = oldCure;
}

Cure	&Cure::operator=(const Cure &oldCure)
{
	this->type = oldCure.type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	AMateria	*newMateriaPtr = new Cure();

	newMateriaPtr->setType(this->getType());

	return (newMateriaPtr);
}

void	Cure::setType(const std::string Name)
{
	this->type = Name;
}

void	Cure::use(ICharacter	&type)
{
	std::cout << "\033[0;33m* heals " << type.getName() << "'s wounds *\033[0;0m" << std::endl;
}

std::string	Cure::getType(void) const
{
	return (this->type);
}