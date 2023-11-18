/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:09:54 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 16:50:34 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("default_RobotomyRequestForm")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm parametric constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const { return this->_target; }

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	srand(time(NULL));
	(void)executor;
	std::cout << "Ka-chunk wheeeeeeeeeeeerrrrrrrrrt ka-Klonk" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization failed" << std::endl;
}
