/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:14:41 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 10:13:22 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:

    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

    public:
        ClapTrap(void);
        ClapTrap(ClapTrap const &other);
        ClapTrap    &operator=(ClapTrap const &other);
        ~ClapTrap();

        ClapTrap(std::string const &name);

        void    setName(std::string const &name);
        void    setHitPoints(int const hitPoints);
        void    setEnergyPoints(int const energyPoints);
        void    setAttackDamage(int const attackDamage);

        const std::string   &getName() const;
        int                 getHitPoints() const;
        int                 getEnergyPoints() const;
        int                 getAttackDamage() const;

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

std::ostream    &operator<<(std::ostream &o, ClapTrap const &rhs);

#endif
