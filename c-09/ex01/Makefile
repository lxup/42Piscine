# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lquehec <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 21:50:58 by lquehec           #+#    #+#              #
#    Updated: 2023/08/22 21:53:16 by lquehec          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS_DIR = ./srcs/

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = $(SRCS:.c=.o)

HEADER_DIR = ./includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUTPUT = libft.a

all : $(OUTPUT)

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

$(OUTPUT) : $(SRCS_OBJ)
	ar rc $(OUTPUT) $(SRCS_OBJ)

clean :
	rm -f $(SRCS_OBJ)

fclean : clean
	rm -f $(OUTPUT)

re : fclean all

.PHONY : all clean fclean re
