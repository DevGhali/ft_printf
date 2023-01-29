# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 16:51:30 by gabd-el-          #+#    #+#              #
#    Updated: 2023/01/29 19:24:47 by gabd-el-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_format.c ft_printchar.c ft_printf.c ft_printhex.c ft_printnbr.c  ft_printunsigned.c \
		ft_printpercentage.c ft_printptr.c ft_printstr.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

all: $(NAME)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(LIBFT) $(OBJS)
	cp	$(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean:	clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all bonus clean fclean re libft