
# $< "include one prerequisite"
# $@ "include target"
# $^ "include the full list of prerequisites"

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra -g3 -std=c++98

NAME = ex03
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re
