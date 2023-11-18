/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:45 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 15:16:23 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat              Billy("Billy", 10);
    std::cout << std::endl;

    ShrubberyCreationForm   Shrubbery("Shrubbery");
    std::cout << std::endl;
    
    RobotomyRequestForm     Robotomy("Robotomy");
    std::cout << std::endl;
    
    PresidentialPardonForm  President("President");
	std::cout << std::endl;
    
    Billy.signForm(Shrubbery);
    Billy.executeForm(Shrubbery);
    std::cout << std::endl;

    Billy.signForm(Robotomy);
    Billy.executeForm(Robotomy);
    std::cout << std::endl;

    Billy.signForm(President);
    Billy.executeForm(President);
    std::cout << std::endl;

	return 0;
}
