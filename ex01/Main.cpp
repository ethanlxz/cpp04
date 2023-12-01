#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main(void)
{
	Animal	*Zoo[10];

	//assign half of zoo to dog and the other half to cat
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}

	//prints array out
	for (int j = 0; j < 10; j++)
	{
		std::cout << j  << " " << Zoo[j]->getType() << std::endl;
	}

	//checks shallow or deep copy
	std::cout << "----------------------------" << std::endl;
	Cat Ethan;
	Ethan.getBrain()->ideas[0] = "I am Ethan";
	Cat	Ellie = Ethan;
	std::cout << "Ethan idea: " << Ethan.getIdeas(0) << std::endl;
	std::cout << "Ellie idea: " << Ellie.getIdeas(0) << std::endl;
	Ellie.getBrain()->ideas[0] = "I am Ellie";
	//if deep copy, only Ellie will change
	//if shallow copy, both Ethan and Ellie will change
	std::cout << "Ethan idea: " << Ethan.getIdeas(0) << std::endl;
	std::cout << "Ellie idea: " << Ellie.getIdeas(0) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "\n\n" << std::endl;

	std::cout << "----------------------------" << std::endl;
	Cat Joe;
	Joe.getBrain()->ideas[0] = "I am JoeJoe";
	Cat	Jack;
	Jack = Joe;
	std::cout << "Joe idea: " << Joe.getIdeas(0) << std::endl;
	std::cout << "Jack idea: " << Jack.getIdeas(0) << std::endl;
	Jack.getBrain()->ideas[0] = "I am Jack";
	//if deep copy, only Jack will change
	//if shallow copy, both Joe and Jack will change
	std::cout << "Joe idea: " << Joe.getIdeas(0) << std::endl;
	std::cout << "Jack idea: " << Jack.getIdeas(0) << std::endl;
	std::cout << "----------------------------" << std::endl;


	// free all the animals
	for (int k = 0; k < 10; k++)
		delete Zoo[k];


	return (0);
}