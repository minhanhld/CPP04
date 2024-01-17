/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:26:50 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/08 01:36:18 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:

	Dog(void);
	Dog(const Dog &copy);
	~Dog(void);

	Dog	&operator=(const Dog &src);

	void	makeSound(void) const;
	void	getIdeas(void) const;
	void	setIdea(size_t i, std::string idea);

	private:

	Brain	*_brain;
};

#endif
