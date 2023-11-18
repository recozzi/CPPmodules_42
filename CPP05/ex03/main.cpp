/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:45 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 15:39:55 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    Intern  someRandomIntern;
    AForm*  rrf;
    
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    // rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

    std::cout << std::endl;

    delete rrf;
	
    return 0;
}
