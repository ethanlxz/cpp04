#pragma once

#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
		AMateria(void);
		AMateria(const AMateria &oldMateria);
	public:
		virtual ~AMateria(void);
		AMateria	&operator=(const AMateria &oldMateria);
		AMateria(std::string const &type);
		std::string	const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) = 0;
		virtual void		setType(const std::string Name) = 0;
};