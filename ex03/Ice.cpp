#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice constructor called" << std::endl;
	this->type = "Ice";
}

Ice::Ice(const Ice &oldIce)
{
	this->type = oldIce.type;
	*this = oldIce;
}

Ice	&Ice::operator=(const Ice &oldIce)
{
	this->type = oldIce.type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	AMateria	*newMateriaPtr = new Ice();

	newMateriaPtr->setType(this->getType());

	return (newMateriaPtr);
}

void	Ice::setType(const std::string Name)
{
	this->type = Name;
}

void	Ice::use(ICharacter	&type)
{
	std::cout << "* shoots ice bolt at " << type.getName() << " *" << std::endl;
}

std::string	Ice::getType(void) const
{
	return (this->type);
}