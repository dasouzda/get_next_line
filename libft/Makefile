# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 11:41:06 by dasouzda          #+#    #+#              #
#    Updated: 2024/11/21 16:00:46 by dasouzda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque finale
NAME = libft.a

# Liste des fichiers sources
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_strchr.c ft_strrchr.c ft_memmove.c ft_bzero.c \
ft_strlcpy.c ft_strtrim.c ft_memcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Liste des fichiers objets (.o)
OBJ = $(SRC:.c=.o)

# Inclusion du fichier d'en tete (et son chemin)
INCL = -I/.

# Options de compilation
CFLAGS = -Wall -Wextra -Werror $(INCL)

# Compilateur
CC = cc

# Commande pour créer la bibliothèque
AR = ar rcs

# Règle par défaut (appelée quand on tape 'make')
all: $(NAME)

# Comment construire la bibliothèque
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Comment compiler les fichiers .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supprimer les fichiers objets
clean:
	rm -f $(OBJ)

# Supprimer les fichiers objets et la bibliothèque
fclean: clean
	rm -f $(NAME)

# Recompiler tout depuis zéro
re: fclean all

# Indiquer que certaines cibles ne sont pas des fichiers
.PHONY: all clean fclean re bonusclean

###################### BONUS ######################

# Fichiers sources des bonus 
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstlast.c  \


# Fichiers objets pour les bonus
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Comment compiler les fichiers .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle bonus pour compiler les bonus et les ajouter à la bibliothèque
bonus: $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)

# Inclure les bonus dans clean (verifier le nom de la commande "meme nom")
bonusclean:
	rm -f $(OBJ) $(BONUS_OBJ)

###################################################