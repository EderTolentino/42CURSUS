/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:36:31 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/12/30 10:36:39 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static	int	check_input_formats(const char *input, va_list arguments);
static	int	print_chars(const char *input, va_list arguments);

int	ft_printf(const char *input, ...)
{
	va_list	arguments;
	int		count_chars;

	count_chars = 0;
	va_start(arguments, input);
	count_chars = check_input_formats(input, arguments);
	va_end(arguments);
	return (count_chars);
}

static	int	check_input_formats(const char *input, va_list arguments)
{
	int	count_chars;

	count_chars = 0;
	while (*input)
	{
		if (*input == '%')
			count_chars += print_chars(++input, arguments);
		else
			count_chars += ft_put_char(*input);
		input++;
	}
	return (count_chars);
}

static	int	print_chars(const char *input, va_list arguments)
{
	int	count_chars;

	count_chars = 0;
	if (*input == 'c')
		count_chars += ft_put_char(va_arg(arguments, int));
	if (*input == 's')
		count_chars += ft_put_str(va_arg(arguments, char *));
	if (*input == 'p')
		count_chars += ft_put_pointer_hexa(va_arg(arguments, void *));
	if (*input == 'd' || *input == 'i')
		count_chars += ft_put_integer(va_arg(arguments, int));
	if (*input == 'u')
		count_chars += ft_put_ui_decimal(va_arg(arguments, unsigned int));
	if (*input == 'x')
		count_chars += ft_put_ui_lower_hexa(va_arg(arguments, unsigned int));
	if (*input == 'X')
		count_chars += ft_put_ui_upper_hexa(va_arg(arguments, unsigned int));
	if (*input == '%')
		count_chars += ft_put_percent();
	return (count_chars);
}
