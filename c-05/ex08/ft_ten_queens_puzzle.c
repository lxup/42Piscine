/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:44:07 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/14 20:30:35 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_is_valid(int *pos_queen, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if ((pos_queen[i] == row)
			|| (pos_queen[i] + i == row + col)
			|| (pos_queen[i] - i == row - col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(int *pos_queen, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(pos_queen[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	ft_find_solution(int *pos_queen, int queen, int n, int *count)
{
	int	i;

	i = 0;
	if (queen == n)
	{
		ft_print_solution(pos_queen, n);
		*count += 1;
	}
	else
	{
		while (i < n)
		{
			if (ft_is_valid(pos_queen, i, queen))
			{
				pos_queen[queen] = i;
				ft_find_solution(pos_queen, queen + 1, n, count);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	count;
	int	n;
	int	pos_queen[10];

	n = 10;
	i = -1;
	while (++i < n)
		pos_queen[i] = 0;
	count = 0;
	ft_find_solution(pos_queen, 0, n, &count);
	return (count);
}
/*
int	main(void)
{
	ft_ten_queens_puzzle();
	printf("OUTPUT: %d\n", ft_ten_queens_puzzle());
	return (0);
}*/
