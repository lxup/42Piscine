/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:09:23 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/14 19:24:26 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_fibonacci(5));
	return (0);
}*/
