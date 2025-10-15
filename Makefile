# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 14:30:33 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/15 16:01:12 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = g++
CPP_FLAGS = -g -std=c++98 -Wall -Wextra -Werror

EX00 = bureaucrat00
EX01 = bureaucrat01

all: $(EX00) $(EX01)

$(EX00):
	$(CPP) $(CPP_FLAGS )ex00/Bureaucrat.cpp ex00/main.cpp -o $(EX00)

$(EX01):
	$(CPP) $(CPP_FLAGS )ex01/Bureaucrat.cpp ex01/Form.cpp ex01/main.cpp -o $(EX01)

fclean:
	rm -f bureaucrat*
re: fclean all
.PHONY: all fclean re

