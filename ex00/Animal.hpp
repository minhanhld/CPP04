/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:06:19 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/19 18:54:10 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:

	Animal(void);
	Animal(const Animal &copy);
	virtual ~Animal(void);

	Animal &operator=(const Animal &src);
	virtual void	makeSound(void) const;

	void	setType(std::string type);
	std::string	getType(void) const;

	protected:

	std::string	_type;
};

#endif
