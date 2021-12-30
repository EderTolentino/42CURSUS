/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:40:03 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:40:09 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	ft_isalpha(int c)
	This function checks  for an alphabetic character, in the standard "C" locale, 
   	if it is equivalent to (isupper(c) || is‐lower(c)). */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
