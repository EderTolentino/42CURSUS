/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:49:19 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:49:21 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Function name 
ft_substr

Prototype char 
*ft_substr(char const *s, unsigned int start, size_t len);

Parameters 
#1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.

Return value 
The substring. 
NULL if the allocation fails.

External functs
malloc

Description 
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sub_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		sub_len = 0;
	else if (ft_strlen(s) <= len)
		sub_len = ft_strlen(s) - start;
	else
		sub_len = len;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	i = -1;
	while (++i < sub_len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}
