#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	char *hexa;

	hexa = "0123456789abcdef";
	ft_putchar(&hexa[c / 16]);
	ft_putchar(&hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			ft_putchar("\\");
			ft_print_hexa(*str);
		}
		else
			ft_putchar(*str);
		++str;
	}
}

void	main()
{
    char    text[] = "Coucou\ntu vas bien?";
    ft_putstr_non_printable(text);
    printf("OUTPUT: %s\n", text);
    return (0);
}