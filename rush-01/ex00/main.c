/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:00:44 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/13 22:42:29 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	i;
	int	ac;
	int	*tab;

	i = 0;
	if (argc != 2)
	{
		ft_error();
		return (1);
	}
	ac = ft_number_of_arguments(argv[1]);
	if (ac == 0 || ac / 4 > 9)
	{
		ft_error();
		return (1);
	}
	tab = ft_arg_to_tab(argv[1], ac);
	if (tab == NULL || ac / 4 == 0)
	{
		ft_error();
		return (1);
	}
	if (rush01(ac / 4, tab))
		return (1);
	return (0);
}
