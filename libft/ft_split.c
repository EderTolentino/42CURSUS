/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:14:49 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:14:51 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_split

Prototype 
char **ft_split(char const *s, char c)

Parameters 
#1. The string to be split.
#2. The delimiter character.

Return 
Value The array of new strings resulting from the split.
NULL if the allocation fails.

External functs. malloc, free

Description 
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.
*/

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	checker;

	i = 0;
	checker = 0;
	while (*s)
	{
		if (*s != c && checker == 0)
		{
			checker = 1;
			i++;
		}
		else if (*s == c)
			checker = 0;
		s++;
	}
	return (i);
}

static char	*copy_word(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[j++] = copy_word(s, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
