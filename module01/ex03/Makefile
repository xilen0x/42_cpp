# Nombre del ejecutable
NAME = unviolence

# Directorios
OBJS_DIR = .objs/
DEP_DIR = .dep/

# Compilador y FLAGS
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP -MF $(DEP_DIR)$*.d  #-g -fsanitize=address

# Makefile
MKF := Makefile

# Archivos fuente
SRC_FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

# Archivos objeto
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Rutas completas de los archivos objeto y dependencias
OBJS = $(addprefix $(OBJS_DIR), $(OBJ_FILES))
DEPS = $(OBJS:.o=.d)

# Eliminar archivos
RM = rm -rf

# Colores
GREEN = \033[0;32m
RESET = \033[0m


# Regla por defecto
all: $(NAME)

# Regla de limpieza
clean:
	@echo "▶ Cleaning object files and dependencies..."
	@$(RM) $(OBJS_DIR) $(DEP_DIR)

# Regla de limpieza completa
fclean: clean
	@echo "▶ Cleaning executable..."
	@$(RM) $(NAME)

# Regla para reconstruir todo
re: fclean all

# Reglas para crear directorios
$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(DEP_DIR):
	@mkdir -p $(DEP_DIR)

# Regla para compilar archivos fuente en archivos objeto
$(OBJS_DIR)%.o: %.cpp $(MKF) | $(OBJS_DIR) $(DEP_DIR)
	@echo "▶ Compiling... $<"
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Regla para crear el ejecutable
$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)▉▉▉▉▉▉▉▉▉▉ C++ project successfully compiled! ▉▉▉▉▉▉▉▉▉▉$(RESET)"

# Incluye archivos de dependencias si existen
-include $(DEPS)

# Objetivos PHONY
.PHONY: all clean fclean re
