# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isaad <isaad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 14:08:44 by isaad             #+#    #+#              #
#    Updated: 2022/11/03 13:04:12 by isaad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./src/ft_atoi.c	./src/ft_memcmp.c	./src/ft_toupper.c\
./src/ft_bzero.c	./src/ft_memcpy.c	./src/ft_strdup.c	./src/ft_split.c \
./src/ft_isalnum.c	./src/ft_memmove.c	./src/ft_strlcat.c \
./src/ft_isalpha.c	./src/ft_memset.c	./src/ft_strlcpy.c	./src/ft_striteri.c \
./src/ft_isascii.c	./src/ft_putchar_fd.c	./src/ft_strlen.c \
./src/ft_isdigit.c	./src/ft_putendl_fd.c	./src/ft_strncmp.c \
./src/ft_isprint.c	./src/ft_strnstr.c	./src/ft_calloc.c	./src/ft_strtrim.c \
./src/ft_putstr_fd.c	./src/ft_strrchr.c	./src/ft_strjoin.c	./src/ft_putnbr_fd.c \
./src/ft_memchr.c	./src/ft_strchr.c	./src/ft_tolower.c	./src/ft_substr.c	./src/ft_itoa.c	./src/ft_strmapi.c \

BONUS	= ft_lstadd_back.c	ft_lstsize.c	ft_lstadd_front.c	ft_lstnew.c	ft_lstclear.c \
	ft_lstlast.c	ft_lstiter.c	ft_lstdelone.c	ft_lstmap.c \

OBJ	= $(SRCS:c=o)

OBJB	= $(BONUS:c=o)

CFLAGS	= -Wall -Werror -Wextra

NAME	= libft.a

$(NAME)	: $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus : $(OBJ)	$(OBJB)
	ar rcs $(NAME) $(OBJB) $(OBJ)

all : $(NAME)

clean	:
	rm -f $(OBJ) $(OBJB)

fclean	: clean
	rm -f $(NAME)

re	: fclean all
