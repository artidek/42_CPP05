#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Bureaucrat a(0);
	}
	catch(const std::exception& e)
	{
		std::cerr <<"Bureaucrat a "<<e.what() << '\n';
	}
	try
	{
		Bureaucrat b(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat b " <<e.what() << std::endl;
	}
	try
	{
		Bureaucrat c(10);
	}
	catch(const std::exception& e)
	{
		std::cerr<<"Bureaucrat c " <<e.what() << std::endl;
	}
	return 0;
}