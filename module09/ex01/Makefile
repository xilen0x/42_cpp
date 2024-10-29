# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: castorga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 11:16:31 by castorga          #+#    #+#              #
#    Updated: 2024/09/24 11:16:33 by castorga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable
NAME = RPN

# Directorios
OBJS_DIR = .objs/
DEP_DIR = .dep/

# Compilador y FLAGS
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

# Archivos fuente y cabeceras
SRC_FILES = main.cpp RPN.cpp
HDR_FILES = RPN.hpp

# Archivos objeto
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Rutas completas de los archivos objeto y dependencias
OBJS = $(addprefix $(OBJS_DIR), $(OBJ_FILES))
DEPS = $(addprefix $(DEP_DIR), $(SRC_FILES:.cpp=.d))

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

# Regla para crear los directorios
$(OBJS_DIR) $(DEP_DIR):
	@mkdir -p $@

# Regla para compilar archivos fuente en archivos objeto
$(OBJS_DIR)%.o: %.cpp $(HDR_FILES) Makefile | $(OBJS_DIR) $(DEP_DIR)
	@echo "▶ Compiling... $<"
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@
	@mv $(OBJS_DIR)$*.d $(DEP_DIR)

# Regla para crear el ejecutable
$(NAME): $(OBJS) Makefile
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)▉▉▉▉▉▉▉▉▉▉ C++ project successfully compiled! ▉▉▉▉▉▉▉▉▉▉$(RESET)"

# Incluye archivos de dependencias si existen
-include $(DEPS)

# Objetivos PHONY
.PHONY: all clean fclean re
