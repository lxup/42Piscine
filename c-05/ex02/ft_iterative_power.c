/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:50:12 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/09 00:42:36 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;
	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i++ < power)
		result *= nb;
	return (result);
}

int	main(void)
{
	printf("OUTPUT: %d\n", ft_iterative_power(1, 2));
	return (0);
}
