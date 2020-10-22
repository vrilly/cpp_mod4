NAME = ex00

OBJS = main.o Hooman.o Peon.o Sorcerer.o Victim.o
HDRS = Hooman.hpp Peon.hpp Sorcerer.hpp Victim.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp $(HDRS)
	clang++ $(CXXFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all