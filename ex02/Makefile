SRC =	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp

OBJ = $(patsubst %.cpp,$(OBJ_DIR)%.o,${SRC})
SRC_DIR	= src/
OBJ_DIR	= objs/
INC_DIR = includes/

VPATH	= $(SRC_DIR)

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

$(OBJ_DIR)%.o	: %.cpp
				mkdir -p $(OBJ_DIR)
				c++ $(FLAGS) -c $< -I$(INC_DIR) -o $@

NAME =  Form++

all = $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all
