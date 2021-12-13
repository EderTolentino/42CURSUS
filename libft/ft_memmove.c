/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:08:13 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:08:15 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
NAME
       memmove - copy memory area

SYNOPSIS
       #include <string.h>

       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
       The memmove() function copies n bytes from memory area src to 
	   memory area dest.  The memory areas may overlap:
       copying takes place as though the bytes in src are first copied into 
	   a temporary array that does  not  overlap
       src or dest, and the bytes are then copied from the temporary 
	   array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;

	c_dest = (char *)dest;
	c_src = (char *)src;
	if (c_dest > c_src)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	else
	{
		ft_memcpy(c_dest, c_src, n);
	}
	return (c_dest);
}
