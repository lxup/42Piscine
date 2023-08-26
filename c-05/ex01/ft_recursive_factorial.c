/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:30:56 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/14 19:15:22 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_factorial(0));
	return (0);
}*/
