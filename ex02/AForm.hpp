/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:06:45 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/16 21:07:35 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <string>
#include <ostream>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		std::string name;
		int sign;
		int exec;
	protected:
		bool isSigned;
		class GradeToHighexception : public std::exception
		{
			public:
				GradeToHighexception(void);
				virtual const char *what() const throw();
		};
		class GradeToLowexception : public std::exception
		{
			public:
				GradeToLowexception(void);
				virtual const char *what() const throw();
		};
		class FormNotSignedexception : public std::exception
		{
			public:
				FormNotSignedexception(void);
				virtual const char *what() const throw();
		};
	public:
		AForm(void);
		AForm (const AForm &copy);
		virtual ~AForm(void);
		AForm & operator=(const AForm &copy);
		int getGradeSign(void) const;
		int getGradeExec(void) const;
		bool getSigned(void) const;
		const std::string getName(void) const;
		void beSigned(Bureaucrat &b);
		void setName(std::string n);
		void setSign(int s);
		void setExec(int e);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

#endif
