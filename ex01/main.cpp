/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:19:06 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/15 16:00:14 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a(4);
	Bureaucrat b(2);
	Bureaucrat c(1);
	Form fa;
	Form fb;
	Form fc;
	a.signForm(fa);
	b.signForm(fb);
	c.signForm(fc);
}
