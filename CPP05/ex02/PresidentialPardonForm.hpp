/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:35:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 11:48:52 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class	PresidentialPardonForm : public AForm
{
	private:

		std::string	_target;
	
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& src);

		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);

		std::string		getTarget(void) const;
		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
