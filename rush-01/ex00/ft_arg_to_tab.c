/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:26:09 by acaetano          #+#    #+#             */
/*   Updated: 2023/08/13 22:44:50 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	*ft_arg_to_tab(char *str, int argc)
{
	int	i;
	int	j;
	int	*tab;
	int	error;

	i = 0;
	j = 0;
	if (ft_is_num_space(str))
		return (NULL);
	tab = (int *) malloc(argc * sizeof(int));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0' && j < argc)
		{
			tab[j] = ft_char_to_int(str[i]);
			j++;
		}
		i++;
	}
	error = ft_check_tab(tab, argc);
	if (error)
		return (NULL);
	return (tab);
}

int	ft_check_tab(int *tab, int size)
{
	int	max_value;
	int	i;

	i = 0;
	max_value = size / 4;
	while (i < size && max_value >= 4)
	{	
		if (tab[i] > max_value || tab[i] <= 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_num_space(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while ((str[i + 1] == ' ' || !str[i + 1])
			&& (str[i] <= '9' && str[i] >= '0'))
		{
			i += 2;
		}
	}
	if (i != ft_strlen(str) + 1)
		return (1);
	return (0);
}

int	ft_number_of_arguments(char *str)
{
	int	argc;
	int	i;

	i = 0;
	argc = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			argc++;
		i++;
	}
	if (argc % 4 != 0)
		return (0);
	return (argc);
}

int	ft_char_to_int(char c)
{
	int	i;

	i = c - 48;
	return (i);
}
