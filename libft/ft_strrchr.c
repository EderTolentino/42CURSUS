/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:45:24 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:45:41 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
       
    char *strrchr(const char *s, int c);

    #define _GNU_SOURCE        
    #include <string.h>

DESCRIPTION
    The strchr() function returns a pointer to the first occurrence of 
	the character c in the string s.

    The strrchr() function returns a pointer to the last occurrence of 
	the character c in the string s.

    Here "character" means "byte"; these functions do not work with wide 
	or multibyte characters.

RETURN VALUE
    The strchr() and strrchr() functions return a pointer to the matched 
	character or NULL if the character is not found.   
	The  terminating null byte is considered part of the string, so that 
	if c is specified as '\0', these functions return a pointer to the terminator. 
	*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s = s + i;
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
