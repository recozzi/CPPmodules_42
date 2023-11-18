/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:51:33 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 16:49:57 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(), _target("default_PresidentialPardonForm")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm parametric constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget(void) const { return this->_target; }

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	(void)executor;
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
