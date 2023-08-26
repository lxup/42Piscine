/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlimous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:24:40 by chlimous          #+#    #+#             */
/*   Updated: 2023/08/22 01:16:03 by chlimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_map	ft_solver(t_map map)
{
	int			x;
	int			y;
	int			count;
	t_square	square;
	t_square	tmp;

	x = -1;
	count = 0;
	square.x_end = -1;
	square.x_start = 0;
	while (++x < x_size(map.matrix))
	{
		y = -1;
		while (++y < y_size(map.matrix))
		{
			tmp = find_square(map, square, x, y);
			if (tmp.x_start != -1 && square_size(tmp) > square_size(square))
			{
				count++;
				square = tmp;
			}
		}
	}
	map = fill_square(map, square);
	return (map);
}

t_square	find_square(t_map map, t_square square, int x_start, int y_start)
{
	t_square	newsquare;

	newsquare.x_start = x_start;
	newsquare.y_start = y_start;
	newsquare.x_end = x_start + square_size(square);
	newsquare.y_end = y_start + square_size(square);
	if (!check_square(map, newsquare))
	{
		newsquare.x_start = -1;
		return (newsquare);
	}
	while (check_square(map, newsquare))
	{
		newsquare.x_end++;
		newsquare.y_end++;
	}
	newsquare.x_end--;
	newsquare.y_end--;
	return (newsquare);
}

int	square_size(t_square square)
{
	return (square.x_end - square.x_start + 1);
}

int	check_square(t_map map, t_square square)
{
	int	x;
	int	y;

	if (square.x_end > x_size(map.matrix) - 1
		|| square.y_end > y_size(map.matrix) - 1)
		return (0);
	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			if (map.matrix[x][y] == map.obs)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

t_map	fill_square(t_map map, t_square square)
{
	int	x;
	int	y;

	if (map.matrix == NULL)
		return (map);
	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			map.matrix[x][y] = map.full;
			y++;
		}
		x++;
	}
	return (map);
}
