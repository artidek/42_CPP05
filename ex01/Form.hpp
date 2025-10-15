/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:06:45 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/15 16:05:34 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <string>
#include <ostream>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	private:
		static const std::string name;
		bool isSigned;
		static const int sign = 2;
		static const int exec = 25;
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
	public:
		Form(void);
		Form (const Form &copy);
		~Form(void);
		Form & operator=(const Form &copy);
		int getGradeSign(void);
		int getGradeExec(void);
		bool getSigned(void) const;
		std::string getName(void);
		void beSigned(Bureaucrat &b);
};

#endif
