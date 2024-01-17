/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:32:18 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 23:36:37 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

	WrongCat(void);
	WrongCat(const WrongCat &copy);
	~WrongCat(void);

	WrongCat	&operator=(const WrongCat &src);

	void	makeSound(void) const;
};

#endif
