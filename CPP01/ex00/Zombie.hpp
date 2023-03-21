/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:55:39 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/21 14:02:37 by ide-spir         ###   ########.fr       */
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
		Zombie(std::string name);
		Zombie(Zombie const &autre);
		~Zombie();
		void	annonce() const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
