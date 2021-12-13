/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:15:40 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:15:43 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	
ft_isalnum(int c)

This function checks  for an alphabetic character, in the standard "C" locale, 
if it is equivalent to (isupper(c) || is‐lower(c)) or  to a digit (0 through 9). 
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
