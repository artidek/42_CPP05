# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 14:30:33 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/17 14:21:13 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = g++
CPP_FLAGS = -g -std=c++98 -Wall -Wextra -Werror

EX01 = bureaucrat

all: $(EX01)

$(EX01):
	$(CPP) $(CPP_FLAGS ) Bureaucrat.cpp Form.cpp main.cpp -o $(EX01)

fclean:
	rm -f bureaucrat
re: fclean all
.PHONY: all fclean re

