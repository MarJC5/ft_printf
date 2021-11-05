# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 18:11:28 by jmartin           #+#    #+#              #
#    Updated: 2021/11/05 17:58:55 by jmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

NAME 		= 	libft.a
CFLAGS		= 	-Wall -Werror -Wextra -I. -c
CC			= 	gcc
RM			=	rm -f
AR			=	ar -rcs # Create an archive from files
FILES		= 	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcmp.c \
				ft_memcpy.c\
				ft_memchr.c \
				ft_memset.c \
				ft_memmove.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strchr.c \
				ft_strncmp.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strdup.c \
				ft_calloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_itoa.c \
				ft_split.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c
OBJ			= 	$(FILES:.c=.o) # Any file ending in .o depends on the same filename ending in .c to be present.
#BONUSFILES	=	ft_lstnew.c
#BONUSOBJ	= 	$(BONUSFILES:.c=.o)

all: $(NAME)

$(NAME): #bonus
	@$(CC) $(CFLAGS) $(FILES)
	@$(AR) $(NAME) $(OBJ)
	@echo "[$(GREEN)created$(RESET)]: Libft *.o files & $(NAME)"

#bonus:
#	@$(CC) $(CFLAGS) $(BONUSFILES)
#	@echo "[$(GREEN)created$(RESET)]: bonus *.o files"

clean:
	@$(RM) $(OBJ)
	@$(RM) $(BONUSOBJ)
#@echo "[$(RED)deleted$(RESET)]: Libft *.o files"

# Call previous rule to delete .o and clean program too
fclean: clean
	@$(RM) $(NAME)
#@echo "[$(RED)deleted$(RESET)]: $(NAME)"

re: fclean all

# I use to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY : all clean fclean re #bonus