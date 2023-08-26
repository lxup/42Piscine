/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:58:25 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/13 18:41:27 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_col_up(int **matrix, int pos[2], int n, int *value)
{
	int	i;
	int	count_view;
	int	tallest;

	i = -1;
	while (++i < pos[0])
		if (matrix[i][pos[1]] == matrix[pos[0]][pos[1]])
			return (0);
	i = -1;
	tallest = 0;
	count_view = 0;
	while (++i <= pos[0])
	{
		if (matrix[i][pos[1]] > tallest)
		{
			tallest = matrix[i][pos[1]];
			count_view++;
		}
	}
	if ((pos[0] == n - 1 && value[pos[1]] == count_view)
		|| (pos[0] != n - 1 && value[pos[1]] >= count_view))
		return (1);
	return (0);
}

int	check_col_down(int **matrix, int pos[2], int n, int *value)
{
	int	i;
	int	count_view;
	int	tallest;

	if (pos[0] != n - 1)
		return (1);
	i = pos[0] + 1;
	tallest = 0;
	count_view = 0;
	while (--i >= 0)
	{
		if (matrix[i][pos[1]] > tallest)
		{
			tallest = matrix[i][pos[1]];
			count_view++;
		}
	}
	if (value[pos[1] + n] == count_view)
		return (1);
	return (0);
}

int	check_row_left(int **matrix, int pos[2], int n, int *value)
{
	int	i;
	int	count_view;
	int	tallest;

	i = -1;
	while (++i < pos[1])
		if (matrix[pos[0]][i] == matrix[pos[0]][pos[1]])
			return (0);
	i = -1;
	tallest = 0;
	count_view = 0;
	while (++i <= pos[1])
	{
		if (matrix[pos[0]][i] > tallest)
		{
			tallest = matrix[pos[0]][i];
			count_view++;
		}
	}
	if ((pos[1] == n - 1 && value[pos[0] + (n * 2)] == count_view)
		|| (pos[1] != n - 1 && value[pos[0] + (n * 2)] >= count_view))
		return (1);
	return (0);
}

int	check_row_right(int **matrix, int pos[2], int n, int *value)
{
	int	i;
	int	count_view;
	int	tallest;

	if (pos[1] != n - 1)
		return (1);
	i = n;
	tallest = -1;
	count_view = 0;
	while (--i >= 0)
	{
		if (matrix[pos[0]][i] > tallest)
		{
			tallest = matrix[pos[0]][i];
			count_view++;
		}
	}
	if (value[pos[0] + (n * 3)] == count_view)
		return (1);
	return (0);
}

int	ft_is_valid(int **matrix, int pos[2], int n, int *value)
{
	int	j;

	j = 0;
	if (!check_col_up(matrix, pos, n, value)
		|| !check_col_down(matrix, pos, n, value)
		|| !check_row_left(matrix, pos, n, value)
		|| !check_row_right(matrix, pos, n, value)
	)
		return (0);
	return (1);
}
