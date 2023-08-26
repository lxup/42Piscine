/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:46:22 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/17 15:02:23 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	min = 5;
	max = 10;
	printf ("SIZE: %d\n", ft_ultimate_range(&range, min, max));
	i = 0;
	printf ("OUTPUT\n");
	while (i < (max - min))
	{
		printf ("%d", range[i]);
		i++;
	}
	return (0);
}*/
