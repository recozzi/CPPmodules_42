/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:38:42 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 14:56:17 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"	

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
		this->_grade = 150;
		std::cout << "Grade set to " << this->_grade << " by default." << std::endl;
		return ;
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const { return this->_name; }

int	Bureaucrat::getGrade() const { return this->_grade; }

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Caught gradeTooHigh exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Caught gradeTooLow exception";
}

void	Bureaucrat::incrementGrade(int value)
{
	try {
		if (this->_grade - value < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade -= value;
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;
}

void	Bureaucrat::decrementGrade(int value)
{
	try {
		if (this->_grade + value > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade += value;
	} catch (std::exception& err) {
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;
}
