/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:58:55 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/11/16 16:58:57 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
ft_lstnew

Prototype 
t_list *ft_lstnew(void *content);

Parameters 
#1. The content to create the new element with.

Return value 
The new element.

External functs
malloc

Description 
Allocates (with malloc(3)) and returns a new element. 
The variable ’content’ is initialized with the value of the parameter ’content’. 
The variable ’next’ is initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
