/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:01:07 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:01:09 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

SYNOPSIS
    #include <string.h>

    void *memchr(const void *s, int c, size_t n);

        s = Pointer to the object or block of the memory that needs to be scanned

        c = value that needs to be passed that is represented as unsigned char

        n = Size of content in bytes to be scanned

DESCRIPTION
    The  memchr()  function scans the initial n bytes of the memory area 
	pointed to by s for the first instance of c.  
	Both c and the bytes of the memory area pointed to by s are interpreted 
	as unsigned char.

    The memrchr() function is like the memchr() function, except that 
	it searches backward from the end of  the  n
    bytes pointed to by s instead of forward from the beginning.

RETURN VALUE
    The  memchr()  and memrchr() functions return a pointer to the matching 
	byte or NULL if the character does not
    occur in the given memory area.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	str;
	unsigned char	c1;

	i = 0;
	c1 = c;
	while (i < n)
	{	
		str = *(unsigned char *)(s + i);
		if (str == c1)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
