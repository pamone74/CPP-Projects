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
COMPILER = c++
CPPFLAG = -Wall -Wextra -Wextra -std=c++98
SRC = PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
%.o: %.cpp
	$(COMPILER) $(CPPFLAG) -c $< -o $@
$(NAME) : $(OBJ)
	$(COMPILER) $(CPPFLAG) $(SRC) -o $(NAME)
clean:
	@-rm $(OBJ)
fclean: clean	
	@-rm $(NAME)
re: fclean all
.PHONY: all clean fclean re
