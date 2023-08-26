SRCS_DIR = ./srcs/

SRC = main.c ft_atoi.c ft_check_map.c ft_condition.c ft_copy.c ft_free.c ft_get_map.c \
		ft_init.c ft_manage_file.c ft_matrix_size.c ft_putchar.c ft_putstr.c ft_solver.c \
		ft_split.c ft_strdup.c ft_strlen.c

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = ${SRCS:.c=.o}

HEADER_DIR = ./includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

OUTPUT = bsq

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

${OUTPUT} : ${SRCS_OBJ}
	${CC} ${CFLAGS} -o ${OUTPUT} ${SRCS_OBJ}

all : ${OUTPUT}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${OUTPUT}

re : fclean all

.PHONY : all clean fclean re
