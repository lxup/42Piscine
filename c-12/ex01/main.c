/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:47:42 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/24 15:48:26 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_print_list(t_list *beging_list)
{
        while (beging_list)
        {
                printf("PRINT: %p\n", beging_list->data);
                beging_list = beging_list->next;
        }
        
}

int     main(int argc, char **argv)
{
        t_list  *List;
        t_list  *last_item;
        t_list  *new_list;

        List = ft_create_elem("salam");
        printf("BEFORE: %p\n", List->data);
        ft_list_push_front(&List, "wsh");
        printf("OUTPUT: %p\n", List->data);
        last_item = ft_list_last(List);
        printf("last_item: %p\n", last_item->data);
        new_list = ft_list_push_strs(argc, argv);
        ft_print_list(new_list);
        return (0);
}

