# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 14:30:33 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/17 14:25:44 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = g++
CPP_FLAGS = -g -std=c++98 -Wall -Wextra -Werror

EX03 = bureaucrat

all: $(EX03)

$(EX03):
	$(CPP) $(CPP_FLAGS ) Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp -o $(EX03)

fclean:
	rm -f bureaucrat

re: fclean all

.PHONY: all fclean re

