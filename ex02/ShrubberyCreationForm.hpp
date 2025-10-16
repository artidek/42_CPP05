/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:15:55 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/16 20:23:44 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target; 
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string t);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & copy);
		void execute(Bureaucrat const & executor) const;
		const std::string getTarget(void);
};

#endif