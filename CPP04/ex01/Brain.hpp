/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:10:29 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/13 10:18:19 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		void	setBrain(std::string const ideas);
		std::string	_ideas[100];

	public:
		Brain();
		~Brain();
		Brain(Brain const &obj);
		Brain		&operator=(Brain const &obj);

		void		setIdea(std::string const &ideas, int const &idea);

		void		printIdea(int const &idea) const;
		std::string	getIdea(int const &idea) const;
};

#endif
