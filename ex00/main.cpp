/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:40:25 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/19 20:39:32 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

int main()
{

	std::cout << magenta << "_________________________________________________________\n\n|\t\t\tAnimal tests\t\t\t|\n_________________________________________________________\n" << reset << std::endl;
	std::cout << magenta << "Creating one instance of each class : " << reset << std::endl;
	const Animal	*animal = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << red << "animal->getType() : " << reset << animal->getType() << std::endl;
	std::cout << red << "dog->getType() : " << reset << dog->getType() << std::endl;
	std::cout << red << "cat->getType() : " << reset << cat->getType() << std::endl;
	std::cout << std::endl;
	std::cout << red << "animal->makeSound() : " << reset;
	animal->makeSound();
	std::cout << red << "dog->makeSound() : " << reset;
	dog->makeSound();
	std::cout << red << "cat->makeSound() : " << reset;
	cat->makeSound();
	std::cout << std::endl;

	std::cout << cyan << "Deleting the instances" << reset << std::endl;
	delete animal;
	delete dog;
	delete cat;
	std::cout << std::endl;

std::cout << magenta << "_________________________________________________________________\n\n|\t\t\tWrongAnimal tests\t\t\t|\n_________________________________________________________________\n" << reset << std::endl;
	std::cout << magenta << "Creating an instance of WrongAnimal and WrongCat: " << reset << std::endl;
	const WrongAnimal	*wrong_animal = new WrongAnimal();
	const WrongAnimal	*wrong_cat = new WrongCat();

	std::cout << red << "wrong_animal->getType(): " << reset << wrong_animal->getType() << std::endl;
	std::cout << red << "wrong_cat->getType() : " << reset << wrong_cat->getType() << std::endl;
	std::cout << red << "animal->makeSound() : " << reset;
	wrong_animal->makeSound();
	std::cout << red << "wrong_cat->makeSound() : " << reset;
	wrong_cat->makeSound();
	std::cout << std::endl;

	std::cout << cyan << "Deleting the instances" << reset << std::endl;
	delete wrong_animal;
	delete wrong_cat;
	std::cout << std::endl;
	return (0);
}
