/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:40:51 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/05 13:15:37 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nbtemp;

	nbtemp = *b;
	*b = *a;
	*a = nbtemp;
}
/*
int	main()
{
	int	nbr1;
	int	nbr2;

	nbr1 = 42;
	nbr2 = 24;
	printf("AVANT: nbr1 = %d, nbr2 = %d", nbr1, nbr2);
	ft_swap(&nbr1, &nbr2);
	printf("APRES: nbr1 = %d, nbr2 = %d", nbr1, nbr2);
	return (0);
}*/
