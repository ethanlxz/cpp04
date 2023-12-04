#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character constructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		Inventory[i] = NULL;
		toBeDeleted[i] = NULL;
	}
}

Character::Character(const std::string Name)
{
	
	for (int i = 0; i < 4; i++)
	{
		Inventory[i] = NULL;
		toBeDeleted[i] = NULL;
	}

	this->Name = Name;
}

Character::Character(const Character &oldChar)
{

	for (int i = 0; i < 4; i++)
	{
		if (this->Inventory[i] != NULL)
		{
			delete this->Inventory[i];
			this->Inventory[i] = NULL;
		}
		if (this->toBeDeleted[i] != NULL)
		{
			delete this->toBeDeleted[i];
			this->toBeDeleted[i] = NULL;
		}
		if (oldChar.Inventory[i] == NULL)
			this->Inventory[i] = NULL;
		else
		{
			this->Inventory[i] = oldChar.Inventory[i]->clone();
		}
		if (oldChar.toBeDeleted[i] == NULL)
			this->toBeDeleted[i] = NULL;
		else
		{
			this->toBeDeleted[i] = oldChar.toBeDeleted[i]->clone();
		}
		this->Name = oldChar.Name;
	}
}

Character	&Character::operator=(const Character &oldChar)
{

	for (int i = 0; i < 4; i++)
	{
		if (this->Inventory[i] != NULL)
		{
			delete this->Inventory[i];
			this->Inventory[i] = NULL;
		}
		if (this->toBeDeleted[i] != NULL)
		{
			delete this->toBeDeleted[i];
			this->toBeDeleted[i] = NULL;
		}
		if (oldChar.Inventory[i] == NULL)
			this->Inventory[i] = NULL;
		else
		{
			this->Inventory[i] = oldChar.Inventory[i]->clone();
		}
		if (oldChar.toBeDeleted[i] == NULL)
			this->toBeDeleted[i] = NULL;
		else
		{
			this->toBeDeleted[i] = oldChar.toBeDeleted[i]->clone();
		}
		this->Name = oldChar.Name;
	}

	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (Inventory[i] != NULL)
			delete Inventory[i];
		if (toBeDeleted[i] != NULL)
			delete toBeDeleted[i];
	}
}

std::string	Character::getMatType(int i) const
{
	return (Inventory[i]->getType());
}

void	Character::equip(AMateria *m)
{
	int	j = 0;

	if (m == NULL)
	{
		std::cout << "Cannot equip empty Materia!" << std::endl;
		return ;
	}

	while (j < 4)
	{
		if (Inventory[j] == NULL)
			break ;
		j++;
	}

	if (j == 4)
	{
		std::cout << "Character inventory full! Can't equip." << std::endl;
		m = NULL;
		return ;
	}
	Inventory[j] = m->clone();
	std::cout << "\033[0;32mEquipped: " << m->getType() << "\033[0;0m" << std::endl;
}

void	Character::unequip(int i)
{

	if (Inventory[i] == NULL)
	{
		std::cout << "Cannot unequip empty Materia!" << std::endl;
		return ;
	}

	while (i < 4)
	{
		if (toBeDeleted[i] == NULL)
			break ;
		i++;
	}
	if (i == 4)
	{
		std::cout << "Character inventory full!" << std::endl;
		return ;
	}
	toBeDeleted[i] = Inventory[i]->clone();
	delete Inventory[i];
	Inventory[i] = NULL;
	std::cout << "\033[0;31mUnequipped: "<< toBeDeleted[i]->getType() << "\033[0;0m" << std::endl;
}

void	Character::use(int i, ICharacter &target)
{
	if (Inventory[i] == NULL)
	{
		std::cout << "Sorry! Materia unfound at " << i << std::endl;
		return ;
	}
	Inventory[i]->use(target);
}

std::string const	&Character::getName(void) const
{
	return (this->Name);
}