/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:26:50 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 23:40:49 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
	public:

	Cat(void);
	Cat(const Cat &copy);
	~Cat(void);

	Cat	&operator=(const Cat &src);

	void	makeSound(void) const;
};

#endif
