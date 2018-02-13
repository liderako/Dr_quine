# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asvirido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/03 19:00:41 by asvirido          #+#    #+#              #
#    Updated: 2017/03/09 15:54:35 by asvirido         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen

FLAGS = -c -Wall -Wextra -Werror

HEADER = libft.h

SRCS = Colleen.c

BINS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(BINS)

%.o: %.c $(HEADER)
	@ gcc	$(FLAGS)	-o	$@ $<

clean:
	 @ /bin/rm	-f	$(BINS)

fclean: clean
	 @ /bin/rm	-f	$(NAME)

re:	all
