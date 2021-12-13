/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:13:16 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:13:17 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_putnbr_fd

Prototype 
void ft_putnbr_fd(int n, int fd)

Parameters 
#1. The integer to output.
#2. The file descriptor on which to write.

Return value 
None

External functs
Write

Description 
Outputs the integer ’n’ to the given file descriptor.
*/

/*	Putnbr writes the integer passed and have no return value.
 *	This is a recursive function. That means that many putnbr
 *	functions will be called until n be less than 10 (one algarism).
 *	When the last one was finished, all the functions that couldn't
 *	finish will continue untill the first one.
 */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
