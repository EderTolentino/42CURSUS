/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:10:38 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:10:41 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_putchar_fd

Prototype 
void ft_putchar_fd(char c, int fd)

Parameters 
#1. The character to output.
#2. The file descriptor on which to write.

Return value 
None

External functs
write

Description 
Outputs the character ’c’ to the given file descriptor.


ABOUT WRITE:

The write is one of the most basic routines provided by a Unix-like 
operating system kernel. 
It writes data from a buffer declared by the user to a given device, 
such as a file. 
This is the primary way to output data from a program by directly using 
a system call. 
The destination is identified by a numeric code. 
The data to be written, for instance a piece of text, is defined by 
a pointer and a size, given in number of bytes.

write thus takes three arguments:
The file code (file descriptor or fd).
The pointer to a buffer where the data is stored (buf).
The number of bytes to write from the buffer (nbytes).

PROTOTYPE:
ssize_t write(int fd, const void *buf, size_t nbytes);

Argument	Description
fd          It is the file descriptor which has been obtained from 
			the call to open. It is an integer value. 
            The values 0, 1, 2 can also be given, for standard input, 
			standard output & standard error, respectively .
buf         It points to a character array, with content to be written to 
			the file pointed to by fd.
nbytes      It specifies the number of bytes to be written from the 
			character array into the file pointed to by fd.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
