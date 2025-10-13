# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 14:30:33 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/13 15:21:18 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = g++
CPP_FLAGS = -g -std=c++98 -Wall -Wextra -Werror

EX00 = bureaucrat00

all: $(EX00)

$(EX00):
	$(CPP) $(CPP_FLAGS )ex00/Bureaucrat.cpp ex00/main.cpp -o $(EX00)

fclean:
	rm -f bureaucrat*
re: fclean all
.PHONY: all fclean re

