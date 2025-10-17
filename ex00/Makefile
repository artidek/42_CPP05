# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 14:16:21 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/17 14:19:00 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = g++
CPP_FLAGS = -g -std=c++98 -Wall -Wextra -Werror

EX00 = bureaucrat

all: $(EX00)

$(EX00):
	$(CPP) $(CPP_FLAGS ) Bureaucrat.cpp  main.cpp -o $(EX00)

fclean:
	rm -f bureaucrat
re: fclean all
.PHONY: all fclean re