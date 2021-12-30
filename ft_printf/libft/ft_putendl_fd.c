/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:12:49 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:12:51 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_putendl_fd

Prototype 
void ft_putendl_fd(char *s, int fd)

Parameters 
#1. The string to output.
#2. The file descriptor on which to write.

Return value 
None

External functs
Write

Description 
Outputs the string ’s’ to the given file descriptor, followed by a newline.

*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != 0)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}
