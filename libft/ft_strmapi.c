/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:31:45 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:32:03 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_strmapi

Prototype 
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))

Parameters 
#1. The string on which to iterate.
#2. The function to apply to each character.

Return value 
The string created from the successive applications of ’f’. 
Returns NULL if the allocation fails.

External functs
malloc

Description 
Applies the function ’f’ to each character of the string ’s’, and 
passing its index as first argument to create a new string (with malloc(3)) 
resulting from successive applications of ’f’.

*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
