/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:09:23 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/09 00:22:34 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}

int	main(void)
{
	printf("OUTPUT: %d\n", ft_fibonacci(3));
	return (0);
}
