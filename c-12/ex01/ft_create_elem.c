/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:21:56 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/24 15:33:05 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*item;
	
	item = malloc(sizeof(t_list));
	if (item == NULL)
		return (NULL);
	item->data = data;
	item->next = NULL;
	return (item);
}
