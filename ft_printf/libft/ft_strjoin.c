/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:25:16 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:25:24 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_strjoin

Prototype 
char *ft_strjoin(char const *s1, char const *s2);

Parameters 
#1. The prefix string.
#2. The suffix string.

Return 
value The new string. 
NULL if the allocation fails.

External functs. 
malloc

Description 
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		res[i] = s1[i];
	j = -1;
	while (++j < s2_len)
	{
		res[i] = s2[j];
		i++;
	}
	res[i] = '\0';
	return (res);
}
