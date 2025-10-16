/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:41:35 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/16 21:01:58 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


int main(void)
{
	ShrubberyCreationForm shrubbery("home");
	Bureaucrat a(137);
	a.signForm(shrubbery);
	a.executeForm(shrubbery);
}