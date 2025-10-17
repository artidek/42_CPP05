/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:41:35 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/17 12:46:23 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	ShrubberyCreationForm shrubbery("home");
	RobotomyRequestForm robotomy("Bender");
	PresidentialPardonForm pardon("Bender");
	Bureaucrat a(137);
	Bureaucrat b(42);
	Bureaucrat c(5);
	a.signForm(shrubbery);
	a.executeForm(shrubbery);
	b.signForm(robotomy);
	b.executeForm(robotomy);
	c.signForm(pardon);
	c.executeForm(pardon);
}