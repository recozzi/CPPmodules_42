/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:21:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 11:49:01 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>
# include <string>

class	ShrubberyCreationForm : public AForm
{
	private:

		std::string	_target;
	
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);

		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);

		std::string		getTarget(void) const;
		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
