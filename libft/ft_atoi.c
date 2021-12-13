/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:26:20 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 15:30:57 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
int atoi(const char *str);

NAME
       atoi, atol, atoll - convert a string to an integer
SYNOPSIS
       #include <stdlib.h>
       int atoi(const char *nptr);
DESCRIPTION
       The atoi() function converts the initial portion of the string pointed 
	   to by nptr to int.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * (int)res);
}
