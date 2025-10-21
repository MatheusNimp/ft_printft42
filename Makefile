# ---------------------------------------------------------------------------- #
#                                   PRINTF                                     #
# ---------------------------------------------------------------------------- #
# Project Name
NAME = libftprintf.a
# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# ---------------------------------------------------------------------------- #
#                                SOURCE FILES                                  #
# ---------------------------------------------------------------------------- #
# Sources
SRCS = ft_printf.c ft_writeparams.c ft_count_putchar.c \
       ft_count_putstr.c ft_count_putnbr.c ft_count_unsputnbr.c \
       ft_count_putnbrhex.c ft_count_putptr.c ft_aux.c
OBJS = $(SRCS:.c=.o)
# ---------------------------------------------------------------------------- #
#                                    RULES                                     #
# ---------------------------------------------------------------------------- #
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
