#include "libft.h"
#include <stdlib.h>

char **ft_map_create(int side)  //функция5, создает карту
{
    char **map;
    int i;
    int j;

    i = 0;
    **map = (char **)malloc((side) * sizeof(char));
    while (i < side)
    {
        j = 0;
        map[i] = (int *) malloc((size + 1) * sizeof(char));
        while (j < side)
        {
            map[i][j] = '.';
            j++;
        }
        map[i][j] = '\0';
        i++;
    }
    return (map);
}

void ft_print_map(char **map)  //печатает карту
{
    int i;

    i = 0;
    while (i < side)
    {
        ft_putstr(map[i]);
        i++;
    }
}

int main()
{
    int side;
    char **map;

    side = ft_square_root(n * 4); //n - число тетрамино, хз откуда брать
    map = ft_map_create(side);

    return (0);
}