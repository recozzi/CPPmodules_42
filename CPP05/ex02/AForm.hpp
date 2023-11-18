/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:36 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/16 16:36:59 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AFORM_HPP
# define AFORM_HPP

# include <exception>
# include <iostream>

class	Bureaucrat;

class	AForm
{
	private:

		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	
	public:

		AForm(void);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm& src);
	
		virtual ~AForm(void);

		AForm&	operator=(const AForm& rhs);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
		void			beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(const Bureaucrat& executor) const = 0;
		bool			checkExec(const Bureaucrat& executor) const;

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

		class	NotSignedException : public std::exception
		{
			public:

				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const AForm& rhs);

#endif
