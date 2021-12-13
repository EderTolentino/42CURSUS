/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:51:23 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:51:25 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	
NAME
    tolower

SYNOPSIS
	#include <ctype.h>

	int tolower(int c);

DESCRIPTION
	These functions convert uppercase letters to lowercase.

	If  c is a uppercase letter, tolower() returns its lowercase equivalent, 
	if an lowercase representation exists
	in the current locale.  Otherwise, it returns c.  

RETURN VALUE
	The value returned is that of the converted letter, or c if the conversion 
	was not possible.

*/

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + ('a' - 'A');
	return (c);
}
