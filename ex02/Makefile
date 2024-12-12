CPP	= c++
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp 
OBJS	= $(SRCS:.cpp=.o)
NAME	= ClapTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

