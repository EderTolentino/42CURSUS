/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:33:57 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:33:59 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	
NAME
	strncmp - compare two strings

SYNOPSIS
	#include <string.h>

	int strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
	The strncmp() function compares the first (at most) n bytes of the 
	two strings s1 and s2. It returns an integer less than, equal to, 
	or greater than zero if  s1  is found, respectively, to be less than, 
	to match, or be greater than s2.

RETURN VALUE
	The strncmp() function returns an integer less than, equal to, 
	or greater than zero if s1 (or the first n bytes thereof) is found, 
	respectively, to be less than, to match, or be greater than s2. 
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0' && s2[c] != '\0') && c < n - 1)
		c++;
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
