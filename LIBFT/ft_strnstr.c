/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:36:13 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:36:15 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
NAME
	strnstr — locate a substring in a string

LIBRARY
	Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
	#include <string.h>

	char * strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
	The strnstr() function locates the first occurrence of the null-terminated
	string little in the string big, where not more than len characters 
	are searched.  Characters that appear after a ‘\0’ character are not
	searched.  Since the strnstr() function is a FreeBSD specific API, 
	it should only be used when portability is not a concern.

RETURN VALUES
	If little is an empty string, big is returned; if little occurs nowhere 
	in big, NULL is returned; otherwise a pointer to the first character of 
	the first occurrence of little is returned.

EXAMPLES
The following sets the pointer ptr to NULL, because only the first 4 characters 
of largestring are searched:

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 4); 
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)big;
	if (little[0] == '\0')
		return (str);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
