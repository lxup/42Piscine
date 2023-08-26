

OBJ = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUTPUT : ft_display_file

all : {OUTPUT}

{OUTPUT} : $(OBJ)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(OUTPUT)
