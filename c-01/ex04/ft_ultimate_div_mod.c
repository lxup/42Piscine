/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:01:15 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/05 13:26:31 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	atemp;
	int	btemp;

	atemp = *a;
	btemp = *b;
	*a = atemp / btemp;
	*b = atemp % btemp;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("AVANT: a = %d, b = %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("APRES: a = %d, b = %d", a, b);
	return (0);

}*/
