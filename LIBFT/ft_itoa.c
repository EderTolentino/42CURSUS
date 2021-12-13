/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:47:54 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:47:59 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a string representing the 
integer received as an argument. Negative numbers must be handled.
*/

#include "libft.h"

// Function to count the number of algarisms in n, plus the sign (-)

static int	count_len(int n)
{
	int	n_len;

	n_len = 0;
	if (n < 0)
		n_len++;
	while (n)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}

static char	*convert_int(int n, int n_len, char *str)
{
	int	temp;
	int	signal;

	str[n_len--] = '\0';
	signal = 0;
	if (n < 0)
		signal = 1;
	while (n != 0)
	{
		if (n < 0)
			temp = (n % 10) * (-1);
		else
			temp = n % 10;
		str[n_len--] = temp + 48;
		n = n / 10;
	}
	if (signal == 1)
		str[n_len--] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		n_len;

	i = 0;
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
