/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ui_lower_hexa.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:39:22 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/12/30 10:39:25 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_put_ui_lower_hexa(unsigned int n)
{
	char	*str;
	size_t	count_chars;

	str = func_unsigned_itoa_base(n, LOWER_HEXBASE);
	ft_putstr_fd(str, 1);
	count_chars = ft_strlen(str);
	free(str);
	return (count_chars);
}
