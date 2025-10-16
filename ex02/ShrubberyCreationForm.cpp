/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:49:20 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/16 21:10:50 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iomanip>

ShrubberyCreationForm::ShrubberyCreationForm(void) : target("default"){
	AForm::setName("ShrubberyCreationForm");
	AForm::setSign(145);
	AForm::setExec(137);
};
ShrubberyCreationForm::ShrubberyCreationForm(const std::string t) : target(t){
	AForm::setName("ShrubberyCreationForm");
	AForm::setSign(145);
	AForm::setExec(137);
};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
{
	if (this != &copy)
		this->target = copy.target;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void){};
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy)
{
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

const std::string ShrubberyCreationForm::getTarget(void){return this->target;};

void createShrubbery(std::ofstream & ofs, int maxBranch, int w)
{
	if (maxBranch == 1)
	{
		ofs<<std::setw(w)<< "|" <<std::endl;
		return;
	}
	createShrubbery(ofs, maxBranch / 2, w + 1);
	for (int i = 0; i < maxBranch; i++)
	{
		if (i % 2)
		{
			ofs<<std::setw(w);
			ofs<< "\\";
		}
		else
		{
			ofs<<std::setw(w);
			ofs<< "/";
		}
	}
	ofs<< std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string errMessage;

	if (this->getSigned())
	{
		if (this->getGradeExec() < executor.getGrade())
			throw GradeToLowexception();
		else
		{
			std::string name = this->target;
			name.append("_shrubbery");
			std::ofstream ofs(name.c_str(), std::ofstream::out);
			createShrubbery(ofs, 8, 1);
			ofs.close();
		}
	}
	else
		throw FormNotSignedexception();
	
}