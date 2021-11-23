# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 16:10:18 by hjrifi            #+#    #+#              #
#    Updated: 2021/11/19 17:35:37 by hjrifi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc
NAME    = libft.a
FLAGS   = -Wall -Wextra -Werror -c
C_FILES = ft_isdigit.c \
		  ft_memset.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_isprint.c\
		  ft_putchar_fd.c\
		  ft_strlcat.c \
		  ft_substr.c \
		  ft_atoi.c \
		  ft_itoa.c \
		  ft_putendl_fd.c\
		  ft_strlcpy.c \
		  ft_tolower.c \
		  ft_bzero.c \
		  ft_putnbr_fd.c \
		  ft_strlen.c\
		  ft_toupper.c\
		  ft_calloc.c \
		  ft_memchr.c \
		  ft_putstr_fd.c \
		  ft_strmapi.c \
		  ft_isalnum.c\
		  ft_striteri.c\
		  ft_memcmp.c \
		  ft_split.c \
		  ft_strncmp.c \
		  ft_isalpha.c \
		  ft_memcpy.c \
		  ft_strchr.c\
		  ft_strnstr.c\
		  ft_isascii.c \
		  ft_memmove.c \
		  ft_strdup.c \
		  ft_strrchr.c
O_FILES = *.o
all :$(NAME)
$(NAME) :
	@$(CC) $(FLAGS) $(C_FILES)
	@ar -rc $(NAME) $(O_FILES)
clean  : 
	@rm -f *.o
fclean : clean 
	@rm   -f $(NAME)
re     : fclean all
C_BNS = ft_lstadd_back_bonus.c   \
		ft_lstadd_front_bonus.c  \
		ft_lstdelone_bonus.c     \
		ft_lstlast_bonus.c       \
		ft_lstnew_bonus.c        \
		ft_lstsize_bonus.c       \
		ft_lstclear_bonus.c      \
		ft_lstiter_bonus.c       \
		ft_lstmap_bonus.c
bonus : ${subst .c,.o,${C_BNS}}
${subst .c,.o,${C_BNS}} : ${C_BNS}
		@$(CC) $(FLAGS) $(C_BNS) 
		@ar -rc $(NAME) $(O_FILES)