/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:26:50 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 23:44:42 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
	public:

	Dog(void);
	Dog(const Dog &copy);
	~Dog(void);

	Dog	&operator=(const Dog &src);

	void	makeSound(void) const;
};

#endif
