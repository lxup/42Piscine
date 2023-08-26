/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:02:57 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/22 15:02:58 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_get_file_size(char *dictpath, int *file)
{
	char	c;
	int		count;
	int		new_line;
	int		nbr_line;

	*file = open(dictpath, O_RDONLY);
	if (*file == -1)
		return (-1);
	count = 0;
	new_line = 0;
	nbr_line = 0;
	while (read(*file, &c, 1) && new_line < 2)
	{
		if (c == '\n')
		{
			nbr_line++;
			new_line++;
		}
		if (ft_is_printable(c))
			new_line = 0;
		count++;
	}
	if (nbr_line < 1 || new_line >= 2)
		return (0);
	return (count);
}

char	**ft_read_stdin(void)
{
	char	*buffer;
	char	**split;
	int		bytes_read;

	buffer = malloc (sizeof(char) * (BUFFER_STDIN + 1));
	if (!buffer)
		return (0);
	bytes_read = read(0, buffer, BUFFER_STDIN);
	if (bytes_read <= 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	split = ft_split(buffer);
	free(buffer);
	return (split);
}

char	**ft_read_file(char *pathmap)
{
	char	*buffer;
	char	**split;
	int		file;
	int		size;
	int		bytes_read;

	size = ft_get_file_size(pathmap, &file);
	if (size <= 0)
		return (0);
	close(file);
	file = open(pathmap, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc (sizeof(char) * (size + 1));
	if (!buffer)
	{
		close (file);
		return (0);
	}
	bytes_read = read(file, buffer, size);
	buffer[bytes_read] = '\0';
	split = ft_split(buffer);
	free(buffer);
	close(file);
	return (split);
}
