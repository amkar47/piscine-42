# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 10:30:15 by namath            #+#    #+#              #
#    Updated: 2022/07/24 20:37:38 by bpoumeau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

EXEC=rush02
CC=gcc
SRC = ft_checkfindable.c ft_dict_into_str.c ft_fill_type.c ft_is_error.c ft_str.c ft_strstr.c ft_tabbythree.c ft_free.c ft_write_this_beauty.c main.c
PRE = ./srcs/
SRCS= ${addprefix ${PRE}, ${SRC}}
OBJs=$(SRC:.c=.o)
CFLAGS=-Wall -Wextra -Werror

OBJS=${SRCS:.c=.o}

all:	${EXEC}

${EXEC}: ${OBJS}
	${CC} ${CFLAGS} -o ${EXEC} ${OBJS}

.o.c:
	${CC} ${CFLAGS} -o ${$<:.c=.o} -c $<

clean:
	-rm ${OBJS}

fclean:    clean
	-rm ${EXEC}

.PHONY: all clean fclean