/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/16 18:01:39 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("aform"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm parametric constructor called" << std::endl;
	try {
		if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
			throw AForm::GradeTooHighException();
		if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
			throw AForm::GradeTooLowException();
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

AForm::AForm(const AForm& src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;
	try {
		if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
			throw AForm::GradeTooHighException();
		if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
			throw AForm::GradeTooLowException();
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
	*this = src;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl << std::endl;
}

AForm&	AForm::operator=(const AForm& rhs)
{
	std::cout << "AForm assignation operator called" << std::endl;
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return *this;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "AForm gradeTooHigh exception";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "AForm gradeTooLow exception";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "AForm notSigned exception";
}

std::string	AForm::getName(void) const { return this->_name; }

bool	AForm::getSigned(void) const { return this->_signed; }

int	AForm::getGradeToSign(void) const { return this->_gradeToSign; }

int	AForm::getGradeToExecute(void) const { return this->_gradeToExecute; }

std::ostream&	operator<<(std::ostream& os, const AForm& rhs)
{
	os << "AForm: " << rhs.getName() << std::endl;
	if (rhs.getGradeToSign() >= 1 && rhs.getGradeToSign() <= 150)
		os << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	else
		os << "Invalid grade to sign" << std::endl;
	return os;
}

static int	checkGrade(int gradeForm)
{
	if (gradeForm < 1)
	{
		throw AForm::GradeTooHighException();
		return 0;
	}
	else if (gradeForm > 150)
	{
		throw AForm::GradeTooLowException();
		return 0;
	}
	return 1;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	try {
		if (checkGrade(this->getGradeToSign()))
		{
			if (bureaucrat.getGrade() <= this->getGradeToSign())
			{
				this->_signed = true;
				return ;
			}
			else
				throw Bureaucrat::GradeTooLowException();
		}
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
}

bool	AForm::checkExec(const Bureaucrat& executor) const
{
	try {
		if (!this->getSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getGradeToExecute())
			throw Bureaucrat::GradeTooLowException();
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
		return false;
	}
	return true;
}
