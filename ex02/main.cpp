/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 01:31:23 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/19 21:29:21 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <cstdio>
#include <cstdlib>

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");
const int array_size = 10;

void	handle_error(void)
{
	perror("Cat allocation failed");
	std::cerr << "Exiting process now";
	exit(1);
}

int main()
{
	std::cout << magenta << "Creating the arrays that's half filled with dogs and half filled with cat : " << reset << std::endl;
	const Animal	*animals[array_size];
	for (int i = 0; i < array_size / 2; i++)
	{
		animals[i] = new Cat();
		if (animals[i] == NULL)
			handle_error();
	}
	for (int i = array_size / 2; i < array_size; i++)
	{
		animals[i] = new Dog();
		if (animals[i] == NULL)
			handle_error();
	}
	std::cout << std::endl;
	std::cout << magenta << "Displaying the types of each animal contained in the array : " << reset << std::endl;
	for (int i = 0; i < array_size; i++)
	{
		std::cout << red << "animal[" << i << "]->getType() : " << reset << animals[i]->getType() << std::endl;
		std::cout << red << "animal[" << i << "]->makeSound() : " << reset;
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << magenta << "Destroying the array : " << reset << std::endl;
	for (int i = 0; i < array_size; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << magenta << "Checking if the copies aren't shallow : " << reset << std::endl;

	std::cout << cyan << "Creating Dog \"a\" and Dog \"b\" which is a copy of Dog \"a\" : " << reset << std::endl;
	Dog *a = new Dog();
	if (a == NULL)
		handle_error();
	std::cout << std::endl;
	a->setIdea(0, "Idea 1");
	a->setIdea(1, "Idea 2");
	a->setIdea(2, "Idea 3");
	a->setIdea(200, "Idea out of range");
	std::cout << std::endl;

	Dog *b = new Dog(*a);
	if (b == NULL)
		handle_error();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << cyan << "Printing the current ideas that are set of both animals (which should be the same for now) : " << reset << std::endl;
	std::cout << green << "Ideas of Dog \"a\" : " << reset << std::endl;
	a->getIdeas();
	std::cout << green << "Ideas of Dog \"b\" : " << reset << std::endl;
	b->getIdeas();

	std::cout << cyan << "Modifying the ideas of Dog \"a\" check if Dog \"a\"'s ideas change (they shouldn't) : " << reset << std::endl;

	a->setIdea(0, "New idea 1");
	a->setIdea(1, "New idea 2");
	a->setIdea(2, "New idea 3");
	std::cout << green << "Ideas of Dog \"a\" : " << reset << std::endl;
	a->getIdeas();
	std::cout << green << "Ideas of Dog \"b\" : " << reset << std::endl;
	b->getIdeas();

	std::cout << cyan << "Deleting Dog \"a\", and checking if Dog \"b\" still exists (he should) : " << reset << std::endl;
	std::cout << red << "delete (a) : " << reset << std::endl;
	delete(a);
	std::cout << green << "Ideas of Dog \"b\" : " << reset << std::endl;
	b->getIdeas();
	std::cout << red << "delete (b) : " << reset << std::endl;
	delete(b);

	std::cout << magenta << "Testing if it is possible to instantiate an Animal : " << reset << std::endl;
	//Animal	animal = new Animal();

	return (0);
}
