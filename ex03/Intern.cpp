/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:26:05 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/17 14:09:43 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void){}
Intern::Intern(Intern const & copy)
{
	*this = copy;
}
Intern::~Intern(void){}
int findForm(std::string formNames[3], std::string formName)
{
	for (int i = 0; i < 3; i++)
	{
		if (formNames[i].compare(formName) == 0)
			return (i);
	}
	return -1;
}
Intern::WrongFormNameException::WrongFormNameException(void){}
const char *Intern::WrongFormNameException::what() const throw()
{
	return "Intern::WrongFormNameException";
}
AForm *Intern::makeForm(std::string formName, std::string target)
{
	AForm *res;
	switch (findForm(this->formNames, formName))
	{
	case 0:
		res = new RobotomyRequestForm(target);
		break;
	case 1:
		res = new ShrubberyCreationForm(target);
		break;
	case 2:
		res = new PresidentialPardonForm(target);
	default:
		throw WrongFormNameException();
		break;
	}
	std::cout << "Intern creates " << res->getName() << std::endl;
	return res;
}