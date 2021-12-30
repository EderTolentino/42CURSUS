/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:38:01 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/12/30 10:38:04 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_put_integer(int n)
{
	char	*str;
	size_t	count_chars;

	str = ft_itoa(n);
	count_chars = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count_chars);
}
