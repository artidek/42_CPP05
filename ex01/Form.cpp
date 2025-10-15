/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:21:23 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/15 16:08:20 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const std::string Form::name = "fixed form";

Form::Form(void) : isSigned(false)
{
}

Form::Form(const Form &copy) : isSigned(copy.getSigned())
{
}
Form::~Form(void){};
Form &Form::operator=(Form const &copy)
{
	if(this != &copy)
		this->isSigned = copy.getSigned();
	return *this;
}

Form::GradeToHighexception::GradeToHighexception(void){};

const char *Form::GradeToHighexception::what(void) const throw()
{
	return "Form::GradeToHighexception";
}

Form::GradeToLowexception::GradeToLowexception(void){};

const char *Form::GradeToLowexception::what(void) const throw()
{
	return "Form::GradeToLowexception";
}

int Form::getGradeSign(void) {return this->sign;};
int Form::getGradeExec(void) {return this->exec;};
bool Form::getSigned(void) const {return this->isSigned;};
std::string Form::getName(void) {return this->name;};
void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->sign)
		throw GradeToLowexception();
	else
		this->isSigned = true;
}

std::ostream &operator<<(std::ostream &o, Form &f)
{
	o << "Form ";
	o << f.getName();
	o << " form sign grade: ";
	o << f.getGradeSign();
	o << " form execute grade: ";
	o << f.getGradeExec();
	return o;
}
