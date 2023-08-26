/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:04:57 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/08 17:07:09 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
		return (src_size + size);
	while (src[i] != '\0' && i < (size - dest_size - 1))
	{
			dest[dest_size + i] = src[i];
			i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
/*
int	main()
{
	char	dest[20] = "tgsalut";
	char	src[20] = "wsh";
	char	dest2[20] = "tgsalut";
	char	src2[20] = "wsh";
	printf("OUTPUT ORIGINAL %zu\n", strlcat(dest, src, 10));
	printf("ORIGINAL: %s\n", dest);
	printf("OUTPUT NEZ: %u\n", ft_strlcat(dest2, src2, 10));
	printf("OUTPUT: %s\n", dest2); 
	return (0);
}*/
