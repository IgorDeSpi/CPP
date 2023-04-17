/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:16:33 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/17 09:37:58 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private :

	protected :

	public :
		FragTrap();
		~FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &obj);
		FragTrap &operator=(FragTrap const &obj);

		void	highFivesGuys(void);
};

#endif
