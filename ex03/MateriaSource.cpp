#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource constructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		tempMat[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &oldMatSour)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->tempMat[i] != NULL)
		{
			delete this->tempMat[i];
			this->tempMat[i] = NULL;
		}
		if (oldMatSour.tempMat[i] == NULL)
			this->tempMat[i] = NULL;
		else
		{
			this->tempMat[i] = oldMatSour.tempMat[i]->clone();
		}
	}
}

//copy assignment overload
MateriaSource	&MateriaSource::operator=(const MateriaSource &oldMatSour)
{

	for (int i = 0; i < 4; i++)
	{
		if (this->tempMat[i] != NULL)
		{
			delete this->tempMat[i];
			this->tempMat[i] = NULL;
		}
		if (oldMatSour.tempMat[i] == NULL)
			this->tempMat[i] = NULL;
		else
		{
			this->tempMat[i] = oldMatSour.tempMat[i]->clone();
		}
	}

	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor has been called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (tempMat[i] != NULL)
			delete tempMat[i];
	}
}

void	MateriaSource::learnMateria(AMateria *oldMat)
{
	int i = 0;

	std::cout << "learnMateria function called" << std::endl;

	while (i < 4)
	{
		if (tempMat[i] == NULL)
			break ;
		i++;
	}
	if (i == 4)
	{
		std::cout << "Not enough memory for more Materia !" << std::endl;
		delete oldMat;
		return ;
	}
	tempMat[i] = oldMat;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type != "cure" && type != "ice")
	{
		std::cout << "Unknown type for: " << type << std::endl;
		return (0);
	}

	for (int i = 0; i < 4; i++)
	{
		if (tempMat[i] == NULL)
			continue ;
		if (tempMat[i]->getType() == type)
		{
			return (tempMat[i]);
		}
	}
	std::cout << "MateriaSource has not learnt type " << type << " before" << std::endl;
	return (0);
}