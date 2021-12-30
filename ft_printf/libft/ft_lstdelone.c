/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:52:18 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:52:22 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_lstdelone

Prototype 
void ft_lstdelone(t_list *lst, void (*del)(void*));

Parameters 
#1. The element to free.
#2. The address of the function used to delete the content.

Return value 
None

External functs
free

Description 
Takes as a parameter an element and frees the memory of the element’s content 
using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
*/
/*
static void		ft_del(void *content)
{
	free(content);
}


void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (lst->content == NULL || del == NULL)
			return ;
		del(lst->content);
		free(lst);
	}
}
