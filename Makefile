# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pscarcin <pscarcin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 22:19:11 by pscarcin          #+#    #+#              #
#    Updated: 2025/01/14 23:17:23 by pscarcin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a # File generated name

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
ft_toupper.c # Sources

OBJS = ${SRCS:.c=.o} # Convert .c files to .o files (object files)

CC = gcc # Compiler
CFLAGS = -Wall -Werror -Wextra # Compilation flags
RM = rm -rf # Command to remove files and directories
AR = ar crs # Command to create a static library

# Rule to create the library libft.a
$(NAME): $(OBJS)
	$(AR) $@ $^

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Default target to build the library
all: $(NAME)

# Remove all object files
clean:
	$(RM) $(OBJS)

# Remove all object files and the library
fclean: clean
	$(RM) $(NAME)

# Clean and recompile everything
re: fclean all

# Declare targets as phony to avoid issues with files of the same name
.PHONY: all clean fclean re