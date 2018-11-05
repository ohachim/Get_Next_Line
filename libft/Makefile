# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/20 16:54:30 by ohachim           #+#    #+#              #
#    Updated: 2018/11/03 10:34:43 by ohachim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LSRC = ft_atoi.c ft_bzero.c ft_countlst.c ft_craadd.c ft_dreplace.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_plstcont.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_simpleop.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strcpyc.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strlenc.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strsubn.c ft_strtrim.c ft_swpdress.c ft_tolower.c ft_toupper.c
CC = gcc -c -Wall -Wextra -Werror
NAME = libft.a
LIBMK = ar rc
LINDX = ranlib
OBJ = $(LSRC:.c=.o)
all: $(NAME) 

$(NAME) :
	$(CC) $(LSRC) 
	$(LIBMK) $(NAME) $(OBJ)
	$(LINDX) $(NAME)

clean:
	/bin/rm -f $(OBJ) 

fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
