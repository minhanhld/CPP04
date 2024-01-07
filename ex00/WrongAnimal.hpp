/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:32:18 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 23:45:49 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal(void);

	WrongAnimal	&operator=(const WrongAnimal &src);

	void	makeSound(void) const;
	std::string	getType(void) const;
	void	setType(std::string type);

	protected:

	std::string	_type;
};

#endif
