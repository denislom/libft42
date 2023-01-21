NAME	=	libft.a

SOURCE	=	ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_bzero.c\
			ft_memcpy.c\

OBJECTS	=	$(SOURCE:.c=.o)

LIBC	=	ar rc
CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Werror -Wextra -Wall

$(NAME): $(OBJECTS)
	$(LIBC) $(NAME) $(OBJECTS)


all: $(NAME)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re