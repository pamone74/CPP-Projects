# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 10:37:48 by pamone            #+#    #+#              #
#    Updated: 2024/06/22 10:37:49 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
COMPILER = c++
CPPFLAG = -Wall -Wextra -Wextra -std=c++98
SRC = megaphone.cpp

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