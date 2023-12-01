#pragma once

# include <iostream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &oldBrain);
		Brain	&operator=(const Brain &oldBrain);

		std::string	ideas[100];
};