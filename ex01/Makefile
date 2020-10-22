NAME = ex01

OBJS =	AWeapon.o Character.o EmergencyMeeting.o Enemy.o Imposter.o main.o \
		PlasmaRifle.o PowerFist.o RadScorpion.o SuperMutant.o
HDRS =	AWeapon.hpp Character.hpp EmergencyMeeting.hpp Enemy.hpp Imposter.hpp \
		PlasmaRifle.hpp PowerFist.hpp RadScorpion.hpp SuperMutant.hpp

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