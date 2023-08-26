/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:53:56 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/07 14:59:35 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			write(1, "\\", 1);
			ft_print_hexa(*str);
		}
		else
			ft_putchar(*str);
		++str;
	}
}
/*
int	main()
{
    char    text[] = "Coucou\vtu vas bien?";
    ft_putstr_non_printable(text);
    //printf("OUTPUT: %s\n", text);
    return (0);
}*/
