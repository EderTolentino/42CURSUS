/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:50:33 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:50:38 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_lstadd_front

Prototype 
void ft_lstadd_front(t_list **lst, t_list *new);

Parameters 
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.

Return value 
None

External functs. 
None

Description Adds the element ’new’ at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
