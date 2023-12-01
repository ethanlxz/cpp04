#include "AMateria.hpp"


AMateria::AMateria(void)
{
}

AMateria::AMateria(const AMateria &oldMateria)
{
	*this = oldMateria;
}

AMateria	&AMateria::operator=(const AMateria &oldMateria)
{
	this->type = oldMateria.type;
	return (*this);
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}