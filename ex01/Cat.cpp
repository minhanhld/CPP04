/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:22:08 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/19 21:12:27 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	if (!this->_brain)
		exit(1);
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete(this->_brain);
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy asignment operator called" << std::endl;
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

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " : Meow." << std::endl;
}

void	Cat::getIdeas(void) const
{
	for (int i = 0; i < 10; i++)
		std::cout << "Idea number " << i << " of that Cat is : " << this->_brain->getIdea(i) << std::endl;
}

void	Cat::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

