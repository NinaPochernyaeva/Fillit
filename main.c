#include "Libft/libft.h"
#include <stdlib.h>

char **ft_map_create(int side)  //функция5, создает карту
{
    char **map;
    int i;
    int j;

    i = 0;
    map = (char **)malloc((side) * sizeof(char));
    while (i < side)
    {
        j = 0;
        map[i] = (char *) malloc((side + 1) * sizeof(char));
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

void ft_print_map(char **map, int side)  //печатает карту
{
    int i;

    i = 0;
    while (i < side)
    {
        ft_putstr(map[i]);
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    int side;
    char **map;

    side = 10;
   // side = ft_square_root(n * 4); //n - число тетрамино, хз откуда брать
    map = ft_map_create(side);
    ft_print_map(map, side);
    return (0);
}