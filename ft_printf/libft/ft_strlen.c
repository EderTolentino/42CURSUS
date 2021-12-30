/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:30:04 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:30:06 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
size_t ft_strlen(const char *s);

NAME
	strlen - calculate the length of a string

SYNOPSIS
	#include <string.h>

	size_t strlen(const char *s);

DESCRIPTION
	The strlen() function calculates the length of the string pointed to 
	by s, excluding the terminating null byte ('\0').

RETURN VALUE
	The strlen() function returns the number of bytes in the string 
	pointed to by s.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
