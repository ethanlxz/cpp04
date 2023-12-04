#pragma once

# include "Character.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &oldMatSour);
		MateriaSource	&operator=(const MateriaSource &oldMatSour);

		void	learnMateria(AMateria *oldMat);

		AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*tempMat[4];
};
