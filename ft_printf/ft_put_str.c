/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:37:50 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/12/30 10:37:53 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_put_str(char *str)
{
	int	count_chars;

	if (!str)
	{
		return (0);
	}
	count_chars = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count_chars);
}
