/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:21:23 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/15 16:08:20 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(void) : isSigned(false)
{
}

AForm::AForm(const AForm &copy) : isSigned(copy.getSigned())
{
}
AForm::~AForm(void){};
AForm &AForm::operator=(AForm const &copy)
{
	if(this != &copy)
		this->isSigned = copy.getSigned();
	return *this;
}

AForm::GradeToHighexception::GradeToHighexception(void){};

const char *AForm::GradeToHighexception::what(void) const throw()
{
	return "Form::GradeToHighexception";
}

AForm::GradeToLowexception::GradeToLowexception(void){};

const char *AForm::GradeToLowexception::what(void) const throw()
{
	return "Form::GradeToLowexception";
}

AForm::FormNotSignedexception::FormNotSignedexception(void){};

const char *AForm::FormNotSignedexception::what(void) const throw()
{
	return "FormNotSignedexception";
}

int AForm::getGradeSign(void) const {return this->sign;};
int AForm::getGradeExec(void) const {return this->exec;};
bool AForm::getSigned(void) const {return this->isSigned;};
const std::string AForm::getName(void) const {return this->name;};
void AForm::setExec(int e) {this->exec = e;};
void AForm::setName(std::string n) {this->name = n;};
void AForm::setSign(int s) {this->sign = s;};
void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->sign)
		throw GradeToLowexception();
	else
		this->isSigned = true;
}

std::ostream &operator<<(std::ostream &o, AForm &f)
{
	o << "Form ";
	o << f.getName();
	o << " Form sign grade: ";
	o << f.getGradeSign();
	o << " Form execute grade: ";
	o << f.getGradeExec();
	return o;
}

