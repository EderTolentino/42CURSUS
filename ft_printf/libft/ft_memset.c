/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:09:55 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 17:09:56 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example explanation in:

    SYNOPSIS
       #include <string.h>

       void *memset(void *s, int c, size_t n);

    DESCRIPTION
       The memset() function fills the first n bytes of the memory area 
	   pointed to by s with the constant byte c.

    RETURN VALUE
       The memset() function returns a pointer to the memory area s.


    https://www.geeksforgeeks.org/memset-c-example/ 

    memset() is used to fill a block of memory with a particular value.
    The syntax of memset() function is as follows :
    
    void *memset(void *ptr, int x, size_t n)

    ptr ==> Starting address of memory to be filled
    x   ==> Value to be filled
    n   ==> Number of bytes to be filled starting from ptr to be filled

*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
