/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:54:06 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/13 18:09:36 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <exception>

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
		std::string getName() const;
		int getGrade() const;
		void setGrade(const int g);
		void promote(const int g);
		void degrade(const int g);
};
#endif