/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:36 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:41:47 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

class	Bureaucrat;

class	Form
{
	private:

		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	
	public:

		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& src);
	
		~Form(void);

		Form&	operator=(const Form& rhs);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
		void			beSigned(const Bureaucrat& bureaucrat);

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

std::ostream&	operator<<(std::ostream& os, const Form& rhs);
