/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:43:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 11:26:55 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include "AForm.hpp"

class	Bureaucrat
{
	private:

		const std::string	_name;
		int					_grade;

	public:

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);

		~Bureaucrat(void);

		Bureaucrat&		operator=(const Bureaucrat& rhs);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incrementGrade(int value);
		void			decrementGrade(int value);
		void			signForm(AForm& form);
		void			executeForm(const AForm& form) const;

		class	GradeTooHighException : public std::exception
		{
			public:

				virtual const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif
