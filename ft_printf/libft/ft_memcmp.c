/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:04:28 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:04:29 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
NAME
       memcmp - compare memory areas

SYNOPSIS
    #include <string.h>

    int memcmp(const void *s1, const void *s2, size_t n);

        s1 = Pointer to the object or block of the memory

        s2 = Pointer to the object or block of the memory

        n = Size of content to be compared in bytes

DESCRIPTION
    The  memcmp()  function  compares the first n bytes (each interpreted as 
	unsigned char) of the memory areas s1 and s2.

RETURN VALUE
    The memcmp() function returns an integer less than, equal to, or greater 
	than zero if the first n bytes of  s1 is found, respectively, to be less than, 
	to match, or be greater than the first n bytes of s2.

    For  a  nonzero  return  value, the sign is determined by the sign of the 
	difference between the first pair of bytes (interpreted as unsigned char) 
	that differ in s1 and s2.

    If n is zero, the return value is zero. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	unsigned int	i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
			return ((unsigned char)c_s1[i] - (unsigned char)c_s2[i]);
		i++;
	}
	return (0);
}
