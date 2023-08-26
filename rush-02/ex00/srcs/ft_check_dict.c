/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:09:59 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:11:00 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// int	ft_check_nbr_exist(char *nbr, char **dict)
// {
// 	int		i;
// 	char	*dict_word;
// 	char	*dict_number;

// 	i = 0;
// 	while (dict[i])
// 	{
// 		dict_word = ft_get_dict_word(dict[i]);
// 		dict_number = ft_get_dict_number(dict[i]);
// 		if (ft_strcmp(nbr, dict_number) == 0)
// 		{
// 			free(dict_word);
// 			free(dict_number);
// 			return (1);
// 		}
// 		free(dict_word);
// 		free(dict_number);
// 		i++;
// 	}
// 	return (0);
// }

// int	ft_compatible(char *nbr, char **dict, char **tab_nbr, char *zerovalue)
// {
// 	int	i;

// 	i = 0;
// 	while (tab_nbr[i])
// 	{
// 		if (!ft_check_nbr_exist(tab_nbr[i], dict))
// 		{
// 			ft_free(dict, tab_nbr, nbr, zerovalue);
// 			return (0);
// 		}
// 		i++;
// 	}
// 	return (1);
// }

int	ft_get_file_size(char *dictpath)
{
	char	c;
	int		file;
	int		count;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
		return (-1);
	count = 0;
	while (read(file, &c, 1))
		count++;
	close(file);
	return (count);
}

int	ft_check_dict(char *dictpath)
{
	int	file;
	int	file_size;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
		return (0);
	file_size = ft_get_file_size(dictpath);
	if (file_size == 0)
		return (0);
	close(file);
	return (1);
}
