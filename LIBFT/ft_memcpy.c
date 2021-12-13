/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:05:45 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:05:46 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memcpy - copy memory area

SYNOPSIS
	#include <string.h>

	void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
	The  memcpy()  function  copies  n  bytes from memory area src to 
	memory area dest.  The memory areas must not overlap.  
	Use memmove(3) if the memory areas do overlap.

RETURN VALUE
	The memcpy() function returns a pointer to dest.

*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c_dest;
	char	*c_src;

	c_dest = (char *)dest;
	c_src = (char *)src;
	if (c_dest == 0 && c_src == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (c_dest);
}
