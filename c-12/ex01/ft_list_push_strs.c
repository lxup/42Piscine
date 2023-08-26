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

t_list *ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*List;
	t_list	*elem;

	i = 0;
	if (!size || !(*strs))
		return (NULL);
	List = NULL;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		if (!elem)
			return (List);
		elem->next = List;
		List = elem;
		i++; 
	}
	return (List);
}
