#pragma once

# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &oldCure);
		Cure	&operator=(const Cure &oldCure);
		~Cure(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
		void		setType(const std::string Name);
		std::string	getType(void) const;

};
