/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:27:19 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/17 12:27:09 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void) : target("default"){
	AForm::setName("RobotomyRequestForm");
	AForm::setSign(72);
	AForm::setExec(45);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string t) : target(t){
	AForm::setName("RobotomyRequestForm");
	AForm::setSign(72);
	AForm::setExec(45);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
{
	if (this != &copy)
		this->target = copy.target;
}

RobotomyRequestForm::~RobotomyRequestForm(void){};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & copy)
{
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

const std::string RobotomyRequestForm::getTarget(void){return this->target;}

bool makeRobotomy(void)
{
	int min = 0;
	int max = 1;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(min, max);
	int rVal = distrib(gen);
	return (rVal ? true : false);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::string errMessage;

	if (this->getSigned())
	{
		if (this->getGradeExec() < executor.getGrade())
			throw GradeToLowexception();
		else
		{
			std::cout << "Drrrrrrrrrrrrrrrrrrrr...\n";
			std::cout << "Robotomy for " << this->target << (makeRobotomy() ? " success\n" : " failed\n");
		}
	}
	else
		throw FormNotSignedexception();
	
}