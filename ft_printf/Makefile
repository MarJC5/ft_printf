# COLORS
GREEN	= \033[1;32m
RED 	= \033[1;31m
ORANGE	= \033[1;33m
RESET	= \033[0m

LIBFT		= 	./libft
LIBNAME		= 	libft.a
NAME 		= 	libftprintf.a
CFLAGS		= 	-Wall -Werror -Wextra -c
CC			= 	gcc
RM			= 	rm -f
AR			= 	ar -rcs
FILES		= 	ft_printf.c \
				ft_printf_char.c \
				ft_printf_str.c \
				ft_printf_ptr.c \
				ft_printf_per.c \
				ft_printf_hex.c
OBJ			= 	$(FILES:.c=.o)

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
	@echo "[$(RED)deleted$(RESET)]: $(LIBNAME) & $(NAME)"
	@$(MAKE) -C $(LIBFT) fclean

# Compile all for test program
test: tclean all
	@$(CC) -o test $(NAME)
	@echo "[$(ORANGE)build$(RESET)]: Ready to test the program ./test"

# Clean all for test program
tclean: fclean
	@$(RM) ./test
	@echo "[$(RED)deleted$(RESET)]: ./test program"

re: fclean all

.PHONY: all clean fclean re test tclean