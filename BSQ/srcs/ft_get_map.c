/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:01:16 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/22 15:01:17 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_get_parameters(char *empty, char *obs, char *full, char *first_line)
{
	int	i;

	i = 0;
	while (ft_is_printable(first_line[i]))
		i++;
	i--;
	if (ft_is_printable(first_line[i]))
	{
		*full = first_line[i];
		i--;
	}
	if (ft_is_printable(first_line[i]))
	{
		*obs = first_line[i];
		i--;
	}
	if (ft_is_printable(first_line[i]))
	{
		*empty = first_line[i];
		i--;
	}
	if (!ft_is_number(first_line[i]))
		*full = 0;
}

t_map	ft_get_map(int argc, char *argv)
{
	t_map	map;
	char	**array_map;
	char	**only_map;

	if (!argc)
		array_map = ft_read_stdin();
	else
		array_map = ft_read_file(argv);
	if (!array_map)
	{
		map.is_valid = -1;
		return (map);
	}
	ft_get_parameters(&map.empty, &map.obs, &map.full, array_map[0]);
	map.is_valid = ft_is_map_valid(array_map, map);
	only_map = ft_copy(array_map + 1);
	map.matrix = only_map;
	if (!map.empty || !map.obs || !map.full)
		map.is_valid = 0;
	if (map.empty == map.obs || map.empty == map.full || map.full == map.obs)
		map.is_valid = 0;
	ft_free(array_map);
	return (map);
}
