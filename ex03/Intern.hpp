/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:12:41 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/17 14:06:34 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"

class Intern
{
	private:
		std::string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
		class WrongFormNameException : public std::exception
		{
			public:
				WrongFormNameException(void);
				const char *what(void) const throw();
		};
	public:
		Intern(void);
		Intern(Intern const & copy);
		~Intern(void);
		AForm *makeForm(std::string formName, std::string target);
};

#endif