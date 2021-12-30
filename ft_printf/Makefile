# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 10:46:35 by eluiz-to          #+#    #+#              #
#    Updated: 2021/12/30 10:46:41 by eluiz-to         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			gcc

CFLAGS=		-Wall -Werror -Wextra

NAME=		libftprintf.a

SRCS=		ft_printf.c ft_put_char.c ft_put_str.c ft_put_percent.c \
			ft_put_integer.c ft_put_ui_decimal.c func_unsigned_itoa.c \
			ft_put_ui_lower_hexa.c func_unsigned_itoa_base.c \
			ft_put_ui_upper_hexa.c ft_put_pointer_hexa.c func_unsigned_ltoa_base.c

OBJS=		$(SRCS:.c=.o)

LIBFT_DIR=	./libft

LIBFT=		libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS) 
	$(CC) $(CFLAGS) -c -I $(LIBFT_DIR) $(SRCS)
	
clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBFT_DIR)/$(LIBFT)
	rm -f $(NAME) 

re: fclean all
