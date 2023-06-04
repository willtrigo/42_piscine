/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:20:46 by gmendonc          #+#    #+#             */
/*   Updated: 2023/06/04 15:10:34 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_error()
{
    write(1, "Error\n", 6);
}

int ft_input_is_valide(char *input)
{
    int i;

    i = 0;
    while (input[i] != '\0')
    {
        if ((input[i] >= '1' && input[i] <= '4') && (input[i + 1] == ' ' || input[i + 1] == '\0'))
            i++;
        else if (input[i] == ' ' && (input[i + 1] >= '1' && input[i + 1] <= '4'))
            i++;
        else
        {
            ft_error();
            return 0;
        }
    }

    if (i != 31)
    {
        ft_error();
        return 0;
    }

    return 1;
}

void ft_print_grid(int grid[4][4])
{
    int c;
    int l;
    int item;

    c = 0;
    while (c < 4)
    {
        l = 0;
        while (l < 4)
        {
            item = grid[c][l];
            write(1, &item, 1);
            write(1, " ", 1);
            l++;
        }
        write(1, "\n", 1);
        c++;
    }
}

void ft_fill_grid_input(char *input, int grid[4][4])
{
    int c;
    int l;
    int iterator_input;

    iterator_input = 0;
    c = 0;
    while (c < 4)
    {
        l = 0;
        while (l < 4)
        {
            if (input[iterator_input] == ' ')
                iterator_input++;
            grid[c][l] = input[iterator_input++];
            l++;
        }
        c++;
    }
}

int main(int argc, char **argv)
{
    int grid[4][4];

    if (argc != 2)
    {
        ft_error();
        return 0;
    }

    if (!ft_input_is_valide(argv[1]))
        return 0;

    ft_fill_grid_input(argv[1], grid);
    ft_print_grid(grid);

    return 0;
}