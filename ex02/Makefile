NAME = ex02

OBJS = 	main.o AssaultTerminator.o Squad.o TacticalMarine.o
HDRS = 	AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp Squad.hpp \
		TacticalMarine.hpp

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
