/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:24:14 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:24:16 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_striteri

Prototype 
void ft_striteri(char *s, void (*f)(unsigned int, char*))

Parameters 
#1. The string on which to iterate.
#2. The function to apply to each character.

Return value 
None.

External functs. 
None

Description 
Applies the function f to each character of the string passed as argument, 
and passing its index as first argument. 
Each character is passed by address to f to be modified if necessary.
*/

/* This function iterate the string and applies the callback
 * function in every index of the string.
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
