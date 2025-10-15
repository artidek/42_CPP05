/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:54:06 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/15 15:50:21 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <exception>
#include <ostream>

class Form;

class Bureaucrat
{
	private:
		static const std::string name;
		int grade;

		class GradeTooHighException : public std::exception
		{
			private:
				std::string msg;
			public:
				GradeTooHighException(void);
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string msg;
			public:
				GradeTooLowException(void);
				virtual const char *what() const throw();
		};
	public:
		Bureaucrat(void);
		Bureaucrat(const int g);
		Bureaucrat (const Bureaucrat &copy);
		~Bureaucrat ();
		Bureaucrat & operator=(Bureaucrat const &copy);
		std::string getName() const;
		int getGrade() const;
		void setGrade(const int g);
		void promote(const int g);
		void degrade(const int g);
		void signForm(Form &f);
};
std::ostream &operator<<(std::ostream &o, Bureaucrat &b);

#endif
