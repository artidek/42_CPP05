# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 14:30:33 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/16 18:10:57 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = g++
CPP_FLAGS = -g -std=c++98 -Wall -Wextra -Werror

EX00 = bureaucrat00
EX01 = bureaucrat01
EX02 = bureaucrat02

all: $(EX00) $(EX01) $(EX02)

$(EX00):
	$(CPP) $(CPP_FLAGS )ex00/Bureaucrat.cpp ex00/main.cpp -o $(EX00)

$(EX01):
	$(CPP) $(CPP_FLAGS )ex01/Bureaucrat.cpp ex01/Form.cpp ex01/main.cpp -o $(EX01)

$(EX02):
	$(CPP) $(CPP_FLAGS )ex02/Bureaucrat.cpp ex02/AForm.cpp ex02/ShrubberyCreationForm.cpp ex02/main.cpp -o $(EX02)

fclean:
	rm -f bureaucrat*
re: fclean all
.PHONY: all fclean re

