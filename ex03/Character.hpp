#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const Character &oldChar);
		Character(const std::string Name);
		Character	&operator=(const Character &oldChar);
		~Character(void);

		std::string	const	&getName(void) const;
		std::string			getMatType(int i) const;

		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int i, ICharacter &target);

	private:
		AMateria	*Inventory[4];
		AMateria	*toBeDeleted[4];
		std::string	Name;

};