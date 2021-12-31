# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isaad <isaad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 14:08:44 by isaad             #+#    #+#              #
#    Updated: 2021/12/30 07:33:12 by isaad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c	ft_memcmp.c	ft_toupper.c\
ft_bzero.c	ft_memcpy.c	ft_strdup.c	ft_split.c \
ft_isalnum.c	ft_memmove.c	ft_strlcat.c \
ft_isalpha.c	ft_memset.c	ft_strlcpy.c	ft_striteri.c \
ft_isascii.c	ft_putchar_fd.c	ft_strlen.c \
ft_isdigit.c	ft_putendl_fd.c	ft_strncmp.c \
ft_isprint.c	ft_strnstr.c	ft_calloc.c	ft_strtrim.c \
ft_putstr_fd.c	ft_strrchr.c	ft_strjoin.c	ft_putnbr_fd.c \
ft_memchr.c	ft_strchr.c	ft_tolower.c	ft_substr.c	ft_itoa.c	ft_strmapi.c \

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
