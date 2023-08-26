/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:13:15 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:22:40 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_free(char **dict, char **tab_nbr, char *nbr, char *zerovalue)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		free(dict[i]);
		i++;
	}
	free(dict);
	i = 0;
	while (tab_nbr[i])
	{
		free(tab_nbr[i]);
		i++;
	}
	free(tab_nbr);
	free(nbr);
	free(zerovalue);
}
