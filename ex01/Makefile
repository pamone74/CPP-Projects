# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 10:37:54 by pamone            #+#    #+#              #
#    Updated: 2024/06/22 12:24:40 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPPFLAG = c++ -Wall -Wextra -Werror -std=c++98
SRC = PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

%.o : %.cpp 
	$(CPPFLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CPPFLAG) $(SRC) -o $(NAME)
clean:
	rm $(OBJ)
fclean: clean	
	rm $(NAME)
re: fclean all
