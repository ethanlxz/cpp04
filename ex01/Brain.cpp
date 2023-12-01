#include "Brain.hpp"

Brain::Brain(void) {}

Brain::~Brain(void) {}

Brain::Brain(const Brain &oldBrain) {

	*this = oldBrain;
}

Brain	&Brain::operator=(const Brain &oldBrain)
{

	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = oldBrain.ideas[i];
	}
	return (*this);
}