# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 19:02:16 by dasouzda          #+#    #+#              #
#    Updated: 2025/01/10 19:10:25 by dasouzda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = get_next_line.a

SRC = //source

OBJ = $(SRC:.c=.o)

INCL = -I/.

CFLAGS = -Wall -Wextra -Werror $(INCL)

CC = cc

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re