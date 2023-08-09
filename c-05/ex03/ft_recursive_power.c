/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:19:16 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/09 00:42:57 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_power(5, 0));
	return (0);
}
