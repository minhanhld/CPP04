/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 01:11:41 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/08 01:38:05 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default construcotr called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
		{
			if(src._ideas[i].size() > 0)
				this->_ideas[i].assign(src._ideas[i]);
		}
	}
	return *this;
}

const std::string	Brain::getIdea(size_t i) const
{
	if (i < 100)
		return (this->_ideas[i]);
	return ("Index is out of range\n");
}

void	Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "Index is out of range" << std::endl;
}
