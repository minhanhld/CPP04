/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:47:50 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/19 21:09:21 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	public:

	Brain(void);
	Brain(const Brain &copy);
	~Brain(void);

	Brain	&operator=(const Brain &src);

	const std::string	getIdea(size_t i) const;
	const std::string	*getIdeaPtr(size_t i) const;

	void	setIdea(size_t i, std::string idea);

	private:

	std::string _ideas[100];
};

#endif
