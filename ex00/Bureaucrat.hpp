/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:54:06 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/13 15:42:12 by aobshatk         ###   ########.fr       */
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
				GradeTooHighException(const std::string &m);
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string msg;
			public:
				GradeTooLowException(const std::string &m);
				virtual const char *what() const throw();
		};
	public:
		Bureaucrat(const int g);
		Bureaucrat (const Bureaucrat &copy);
		~Bureaucrat ();
		std::string getName() const;
		int getGrade() const;
		void setGrade(const int g);
};
#endif