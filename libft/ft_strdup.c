/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:21:18 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:21:20 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	
NAME
       strdup, strndup, strdupa, strndupa - duplicate a string

SYNOPSIS
       #include <string.h>

       char *strdup(const char *s);

DESCRIPTION
       The  strdup() function returns a pointer to a new string which is a 
	   duplicate of the string s.  Memory for the new string is obtained with 
	   malloc(3), and can be freed with free(3).

RETURN VALUE
       On success, the strdup() function returns a pointer to the duplicated 
	   string. It returns NULL if insufficient memory was available, with 
	   errno set to indicate the cause of the error.
 */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		size;

	size = ft_strlen(src);
	copy = (char *)malloc((size + 1) * sizeof(char));
	if (copy == NULL)
		return (0);
	ft_strcpy(copy, src);
	return (copy);
}
