/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:41:35 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/17 14:11:33 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	AForm *rrf;
	std::string error;
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		error = e.what();
	}
	if (error.empty())
		std::cout << rrf->getName() << " is ready for sign" << std::endl;
	else
		std::cout << error << std::endl;
	
}