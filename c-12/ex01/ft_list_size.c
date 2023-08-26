/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:39:46 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/24 15:45:39 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int	i;

	i = 0;
	ptr = begin_list;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
