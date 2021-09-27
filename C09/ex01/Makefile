NAME	= libft.a
SRC		= ${wildcard ./srcs/*.c}
OBJ		= ${SRC:.c=.o}
INCL	= ./includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar -rcs
RM		= rm -f

.c.o :
	${CC} ${CFLAGS} -I ${INCL} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:
	all clean fclean re