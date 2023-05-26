/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:56:12 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/22 15:49:52 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);

		std::string const	getTarget() const;

		void	execute(Bureaucrat const &executor) const;
};

#endif
