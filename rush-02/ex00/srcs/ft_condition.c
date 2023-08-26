/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:11:45 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:13:00 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c >= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c >= 'Z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lower(c) || ft_is_upper(c) || ft_is_number(c));
}
