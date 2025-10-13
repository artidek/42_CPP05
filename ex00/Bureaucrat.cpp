/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:54:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/13 18:50:04 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const std::string Bureaucrat::name = "John";

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{

}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade to low";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{

}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade to high";
}

Bureaucrat::Bureaucrat(const int g)
{
	setGrade(g);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
		*this = copy;
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

std::ostream &operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName();
	o << ", bureaucrat grade ";
	o<< b.getGrade();
	return o;
}