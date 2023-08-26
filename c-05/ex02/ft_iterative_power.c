/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:50:12 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/14 19:18:47 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 1)
		return (!power);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_iterative_power(-5, 0));
	//printf("T: %d\n", !0);
	return (0);
}*/
