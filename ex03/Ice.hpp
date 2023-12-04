#pragma once

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &oldIce);
		Ice	&operator=(const Ice &oldIce);
		~Ice(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
		void		setType(const std::string Name);
		std::string	getType(void) const;
};
