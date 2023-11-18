/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 15:03:24 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form prametric constructor called" << std::endl;
	try {
		if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
			throw Form::GradeTooHighException();
		if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
			throw Form::GradeTooLowException();
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

Form::Form(const Form& src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	try {
		if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
			throw Form::GradeTooHighException();
		if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
			throw Form::GradeTooLowException();
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
	*this = src;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form gradeTooHigh exception";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form gradeTooLow exception";
}

std::string	Form::getName(void) const { return this->_name; }

bool	Form::getSigned(void) const { return this->_signed; }

int	Form::getGradeToSign(void) const { return this->_gradeToSign; }

int	Form::getGradeToExecute(void) const { return this->_gradeToExecute; }

std::ostream&	operator<<(std::ostream& os, const Form& rhs)
{
	os << "Form: " << rhs.getName() << std::endl;
	if (rhs.getGradeToSign() >= 1 && rhs.getGradeToSign() <= 150)
		os << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	else
		os << "Invalid grade to sign" << std::endl;
	return os;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	try {
		if (bureaucrat.getGrade() <= this->getGradeToSign())
			this->_signed = true;
		else
		{
			if (this->_gradeToSign < 1)
				throw Form::GradeTooHighException();
			else if (this->_gradeToSign > 150)
				throw Form::GradeTooLowException();
		}
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}
