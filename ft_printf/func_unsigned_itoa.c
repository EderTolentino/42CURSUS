/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_unsigned_itoa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:40:01 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/12/30 10:40:04 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	count_len(unsigned int n);
static char	*convert_int(unsigned int n, int n_len, char *str);

char	*func_unsigned_itoa(unsigned int n)
{
	char	*str;
	int		n_len;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	n_len = count_len(n);
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (NULL);
	str = convert_int(n, n_len, str);
	return (str);
}

static int	count_len(unsigned int n)
{
	int	n_len;

	n_len = 0;
	while (n)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}

static char	*convert_int(unsigned int n, int n_len, char *str)
{
	int	temp;

	str[n_len--] = '\0';
	while (n != 0)
	{
		temp = n % 10;
		str[n_len--] = temp + 48;
		n = n / 10;
	}
	return (str);
}
