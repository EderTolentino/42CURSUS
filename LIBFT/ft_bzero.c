/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:01:23 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:01:29 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
void bzero(void *s, size_t n);

DESCRIPTION         
    The bzero() function erases the data in the n bytes of the memory
    starting at the location pointed to by s, by writing zeros (bytes
    containing '\0') to that area.
RETURN VALUE         
       None. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
