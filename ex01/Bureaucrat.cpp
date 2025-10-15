/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:54:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/15 16:21:26 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const std::string Bureaucrat::name = "John";
class Form;

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{

}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat::GradeTooLowException";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{

}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat::GradeToHighException";
}

Bureaucrat::Bureaucrat(const int g)
{
	setGrade(g);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : grade(copy.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::setGrade(const int g)
{
	if (g < 1)
	{
		throw GradeTooHighException();
		return;
	}
	if (g > 150)
	{
		throw GradeTooLowException();
		return;
	}
	this->grade = g;
}

void Bureaucrat::promote(const int g)
{
	if (this->grade - g < 1)
		throw GradeTooHighException();
	else
		this->grade -= g;
}

void Bureaucrat::degrade(const int g)
{
	if (this->grade + g > 150)
		throw GradeTooLowException();
	else
		this->grade += g;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this != &copy)
	{
		this->grade = copy.getGrade();
	}
	return *this;
}

void Bureaucrat::signForm(Form &f)
{
	std::string excep;
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		excep = e.what();
	}
	if (f.getSigned())
		std::cout << *this << " signed " << f.getName() << std::endl;
	else
		std::cout << *this << " couldn't sign " << f.getName() << " because " << excep << std::endl;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName();
	o << ", bureaucrat grade ";
	o<< b.getGrade();
	return o;
}
