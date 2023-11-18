/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:28:35 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 11:48:32 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <cmath>

class	RobotomyRequestForm : public AForm
{
	private:

		std::string	_target;
	
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& src);

		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);

		std::string		getTarget(void) const;
		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
