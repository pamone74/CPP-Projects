NAME = BraiiiiiiinnnzzzZ
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
SRC = zombieHorde.cpp Zombie.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean
	
re: clean all
.PHONY = all clean 
