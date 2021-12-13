/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:53:23 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:53:25 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_lstiter

Prototype 
void ft_lstiter(t_list *lst, void (*f)(void *));

Parameters 
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.

Return value
None

External functs
None

Description 
Iterates the list ’lst’ and applies the function ’f’ to 
the content of each element.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
