# COLORS
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

LIBFT		= ./libft
LIBNAME		= libft.a
NAME 		= libftprintf.a
BUILDDIR	= build/
CFLAGS		= -Wall -Werror -Wextra -c
CC			= gcc
RM			= rm -f
AR			= ar -rcs
FILES		= ft_printf.c
OBJ			= $(FILES:.c=.o)

all: $(NAME)

# Compile libft files with Makefile of the dir 
# Copy the libft.a content to libftprintf.a 
# Compile ft_printf files and add content to libftprintf.a
$(NAME):
	@$(MAKE) -C $(LIBFT) 
	@cp $(LIBFT)/$(LIBNAME) $(NAME)
	@$(CC) $(CFLAGS) $(FILES)
	@$(AR) $(NAME) $(OBJ)
	@echo "[$(GREEN)created$(RESET)]: libft/ft_printf *.o files, $(NAME) & $(LIBNAME)"

clean:
	@$(RM) $(OBJ)
	@echo "[$(RED)deleted$(RESET)]: libft/ft_printf *.o files"
	@$(MAKE) -C $(LIBFT) clean

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(RED)deleted$(RESET)]: $(NAME) & $(LIBNAME)"
	@$(MAKE) -C $(LIBFT) fclean

# Compile all for test program
test: all
	@$(CC) -o test $(NAME)
	@echo "[$(GREEN)created$(RESET)]: test program"

# Clean all for test program
tclean: fclean
	@$(RM) ./test
	@echo "[$(RED)deleted$(RESET)]: test program"

re: fclean all

.PHONY: all clean fclean re test tclean