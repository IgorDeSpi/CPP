/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:21:33 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/23 14:29:45 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		Zombie(Zombie const &autre);
		void	annonce() const;
		void	setname(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
