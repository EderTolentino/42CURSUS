/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:27:18 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:27:20 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	 	
NAME
	strlcpy, strlcat — size-bounded string copying and concatenation

LIBRARY
	Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
	#include <string.h>

	size_t  strlcat(char *dst, const char *src, size_t size);

DESCRIPTION
  The strlcat() function appends the NUL-terminated string src to 
  the end of dst. 
  It will append at most size - strlen(dst) - 1 bytes, 
  NUL-terminating the result.

RETURN VALUES
The strlcat() function returns the total length of the 
string it tried to create. 
That means the initial length of dst plus the length of src. 
If dest lenght was bigger than the size, the length of dest should be 
equal to size and don't concatenate.
While this may seem somewhat confusing, it was done to make truncation 
detection simple.	
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	result = ft_strlen(dest) + ft_strlen(src);
	if (size <= ft_strlen(dest))
	{
		result = size + ft_strlen(src);
		return (result);
	}
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}
