/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:48:32 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/05 13:37:47 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[(size - 1) - i];
		tab[(size - 1) - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
int	main()
{
	int	tab[4] = { 25, 50, 75, 100 };
	ft_rev_int_tab(tab, 4);

	int	i;

	i = 0;
	while(i < 4)
	{
		printf("TEST: %d", tab[i]);
		i++;
	}
	return(0);
}*/
