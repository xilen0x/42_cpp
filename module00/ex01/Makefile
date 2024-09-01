# Compilador
CXX = c++

# Flags
CXXFLAGS = -Wall -Wextra -Werror -Iinclude

# Archivos fuente y objetos
SRCS = main.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJS = $(SRCS:.cpp=.o)

# Ejecutable
NAME = phonebook

# Regla principal
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Regla para limpiar archivos compilados
clean:
	rm -f $(OBJS)

# Regla para limpiar todo, incluyendo el ejecutable
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all

.PHONY: all clean fclean re
