/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:52:02 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:52:12 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	
NAME
	toupper 

SYNOPSIS
	#include <ctype.h>

	int toupper(int c);

DESCRIPTION
	These functions convert lowercase letters to uppercase.

	If c is a lowercase letter, toupper() returns its uppercase equivalent, 
	if an uppercase representation exists in the current locale.  Otherwise, 
	it returns c.  

RETURN VALUE
	The value returned is that of the converted letter, or c if the conversion 
	was not possible.

*/

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - ('a' - 'A');
	return (c);
}
