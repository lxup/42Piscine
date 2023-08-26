/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:16:17 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/24 15:49:21 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdio.h>
# include <stdlib.h>

typedef struct t_list
{
	void *data;
	struct t_list *next;
}	t_list;

t_list *ft_list_push_strs(int size, char **strs);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int	ft_list_size(t_list *begin_list);
t_list  *ft_create_elem(void *data);
t_list *ft_list_last(t_list *begin_list);

#endif
