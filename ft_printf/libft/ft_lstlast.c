/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:54:14 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:54:16 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_lstlast

Prototype 
t_list *ft_lstlast(t_list *lst);

Parameters 
#1. The beginning of the list.

Return value 
Last element of the list.

External functs
None

Description 
Returns the last element of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
