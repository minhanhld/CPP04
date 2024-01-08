/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:22:08 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/08 01:37:03 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	if (!this->_brain)
		exit(1);
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete(this->_brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy asignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain();
		if (!this->_brain)
			exit(1);
		*(this->_brain) = *(src._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " : Meow." << std::endl;
}

void	Dog::getIdeas(void) const
{
	for (int i = 0; i < 10; i++)
		std::cout << "Idea number " << i << " of that Dog is : " << this->_brain->getIdea(i) << std::endl;
}

void	Dog::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
