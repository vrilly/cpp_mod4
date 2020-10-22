NAME = ex03

OBJS =	main.o AMateria.o Character.o Cure.o Ice.o MateriaSource.o
HDRS =	AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaShppurce.hpp \
		ICharacter.hpp IMateriaSource.hpp

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
