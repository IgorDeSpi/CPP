/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:53:27 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/11 13:03:22 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <limits.h>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int _N;
		Span();

	public:
		Span(unsigned int N);
		Span(Span const &obj);
		~Span();
		Span	&operator=(Span const &obj);

		unsigned int	getSize() const;
		std::vector<int>	getVector() const;

		void	addNumber(int const value);
		void	addNumber(std::vector<int>::const_iterator const begin, std::vector<int>::const_iterator const end);
		long int	shortestSpan();
		long int	longestSpan();

		void	changeValue(int const target, int const value);
};

#endif
