/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:57:59 by ide-spir          #+#    #+#             */
/*   Updated: 2023/07/18 11:39:52 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <cstring>

# define DEBUG 0

class	RPN
{
	private:
		std::stack<long int>	_stack;
		std::string				_arg;
		bool					_argStatus;
		RPN();

	public:
		RPN(const std::string& arg);
		RPN(RPN const &obj);
		~RPN();
		RPN &operator=(RPN const &obj);

		int		Reverse_Polish_Notation();
		bool	Parse_Reverse_Polish_Notation();

		std::stack<long int>	getStack() const { return _stack; };
		std::string				getArg() const { return _arg; };
		bool					getArgStatus() const { return _argStatus; };
};

#endif
