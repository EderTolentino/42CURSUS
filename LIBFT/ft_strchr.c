/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:04:09 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 15:04:19 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS      
    char *strchr(const char *s, int c);
    s – The string in which the character is searched.
    c – The character that is searched in the string str.

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
	The  terminating null byte is considered part of the string, so that if 
	c is specified as '\0', these functions return a pointer to the terminator. 
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
