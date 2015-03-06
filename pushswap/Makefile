# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 11:20:21 by lmarti            #+#    #+#              #
#    Updated: 2015/03/06 10:39:13 by lmarti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
GC		=	gcc
CC		=	clang
SRCS	=	./srcs/
SRCH	=	./includes
SRC		=	$(SRCS)main.c\
			$(SRCS)error.c\
			$(SRCS)tools.c\
			$(SRCS)swap.c\
			$(SRCS)push.c\
			$(SRCS)rotate.c\
			$(SRCS)reverse.c
OBJ		=	$(SRC:.c=.o)
LIBH	=	libft/includes
LIB		=	libft
MAKE	=	make
NCURSE	=	-lncurses
CFLAGS	=	-Wall -Wextra -Werror -O3
DFLAGS	=	-g3 -std=c99
LFLAGS	=	--analyze

all:		libft $(NAME)

$(NAME):	$(OBJ)
			$(GC) $(CFLAGS) $(NCURSE) -o $(NAME) $(OBJ) -L$(LIB) -lft -I $(LIBH)

libft:
			$(MAKE) -C $(LIB)

%.o: %.c
			$(GC) $(CFLAGS) -I $(SRCH) -I $(LIBH) -c $< -o $@

clean:		
			$(MAKE) clean -C $(LIB)
			rm -f $(OBJ)

fclean:		clean
			$(MAKE) fclean -C $(LIB)
			rm -f $(NAME)

re:			fclean all

debug:		CFLAGS += $(DFLAGS)
debug:		re

leaks:		CFLAGS += $(LFLAGS)
leaks:		re

clang:		GC = $(CC)
clang:		re

.PHONY:		all libft clean fclean re debug leaks clang
