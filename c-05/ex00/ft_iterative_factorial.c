/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:57:59 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/08 21:30:16 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i++ <= nb)
		result *= i;
	return (result);
}
/*
int	main(void)
{
	printf ("OUTPUT: %d\n", ft_iterative_factorial(5));
	return (0);
}*/
