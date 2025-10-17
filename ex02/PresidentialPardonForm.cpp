/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:27:19 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/17 12:47:53 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : target("default"){
	AForm::setName("PresidentialPardonForm");
	AForm::setSign(25);
	AForm::setExec(5);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string t) : target(t){
	AForm::setName("PresidentialPardonForm");
	AForm::setSign(72);
	AForm::setExec(45);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
{
	if (this != &copy)
		this->target = copy.target;
}

PresidentialPardonForm::~PresidentialPardonForm(void){};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & copy)
{
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const{return this->target;}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::string errMessage;

	if (this->getSigned())
	{
		if (this->getGradeExec() < executor.getGrade())
			throw GradeToLowexception();
		else
			std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebox\n";
	}
	else
		throw FormNotSignedexception();
	
}