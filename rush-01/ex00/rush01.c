/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:58:25 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/13 22:00:44 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	*ft_define_next_pos(int *pos, int *next_pos, int n)
{	
	if (pos[1] == n - 1)
	{
		next_pos[0] = pos[0] + 1;
		next_pos[1] = 0;
	}
	else
	{
		next_pos[0] = pos[0];
		next_pos[1] = pos[1] + 1;
	}
	return (next_pos);
}

int	ft_find_solution(int **matrix, int pos[2], int n, int *value)
{
	int	i;
	int	next_pos[2];

	i = 0;
	if (pos[0] == n)
		return (1);
	while (++i <= n)
	{
		matrix[pos[0]][pos[1]] = i;
		if (ft_is_valid(matrix, pos, n, value))
		{
			ft_define_next_pos(pos, next_pos, n);
			if (ft_find_solution(matrix, next_pos, n, value))
				return (1);
		}
		matrix[pos[0]][pos[1]] = 0;
	}
	return (0);
}

void	ft_free(int **matrix, int *value, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	free(value);
}

int	ft_start(int **matrix, int n, int *value)
{
	int	init_pos[2];

	init_pos[0] = 0;
	init_pos[1] = 0;
	if (ft_find_solution(matrix, init_pos, n, value))
		ft_print_solution(matrix, n);
	else
	{
		ft_error();
		return (1);
	}
	ft_free(matrix, value, n);
	return (0);
}

int	rush01(int n, int *value)
{
	int	**matrix;
	int	y;
	int	x;

	matrix = malloc(sizeof(long *) * n);
	if (!matrix)
		return (0);
	y = 0;
	x = 0;
	while (y < n)
	{
		matrix[y] = malloc(sizeof(long) * n);
		if (!matrix[y])
			return (0);
		while (x < n)
		{
			matrix[y][x] = 0;
			x++;
		}
		x = -1;
		y++;
	}
	if (ft_start(matrix, n, value))
		return (1);
	return (0);
}
