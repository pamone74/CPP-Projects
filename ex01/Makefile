NAME = phonebook
CPPFLAG = c++ -Wall -Wextra -Werror -std=c++98
SRC = phonebook.cpp
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
