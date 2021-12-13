/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:29:04 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:29:05 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
NAME
	strlcpy, strlcat — size-bounded string copying and concatenation

LIBRARY
	Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
	#include <string.h>

	size_t     strlcpy(char *dst, const char *src, size_t size);     

DESCRIPTION
    The strlcpy() function copies up to size - 1 characters from the 
	NUL-terminated string src to dst, NUL-terminating the result.
	The size passed inlcude the null terminator.
	
RETURN VALUES
	The strlcpy() function returns the total length of the 
	string it tried to create. 
	That means the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
