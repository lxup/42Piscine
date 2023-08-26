/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:46:08 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/24 15:47:06 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;
	t_list	*last;

	ptr = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = ptr;
	else
	{
		last = ft_list_last(*begin_list);
		last->next = ptr;
	}
}
