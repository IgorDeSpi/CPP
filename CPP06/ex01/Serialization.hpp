/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:53:45 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/07 16:00:27 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	std::string	str_value;
	int			int_value;
	void		getValues() const;
};

class Serialization
{
	private:
		Serialization();
		Serialization(Serialization const &obj);
		~Serialization();
		Serialization &operator=(Serialization const &obj);

	public:
		static	uintptr_t serialize(Data *ptr);
		static	Data *deserialize(uintptr_t raw);
};

#endif
