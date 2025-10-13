/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:54:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/13 15:42:39 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const std::string Bureaucrat::name = "John";

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &m) : msg(m)
{

}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return this->msg.c_str();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &m) : msg(m)
{

}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return this->msg.c_str();
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
		throw GradeTooLowException("Grade to low");
	}
	if (g > 150)
	{
		throw GradeTooHighException("Grade to high");
	}
	this->grade = g;
}