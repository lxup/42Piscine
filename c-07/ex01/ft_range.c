#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;
    int i;

    tab = NULL;
    if (min >= max)
        return (0);
    tab = malloc(sizeof(char) * (max - min));
    i = 0;
    while (i < (max - min))
    {
        tab[i] = min + i;
        i++;
    }
    return (tab);
}

int main(void)
{
    int *tab;
    int min;
    int max;
    int i;

    min = 5;
    max = 10;
    tab = ft_range(min, max);
    i = 0;
    while (i < (max - min))
    {
        printf("%d", tab[i]);
        i++;
    }
    return (0);
}