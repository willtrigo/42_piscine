/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:20:46 by gmendonc          #+#    #+#             */
/*   Updated: 2023/06/03 18:59:09 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_message_error()
{
    write(1, "Error\n", 6);
}

int inicializar()
{
    // code
}

int ft_str_len(char *str)
{
    int counter;
    while (str[counter] != '\0')
        counter++;
    return counter;
}

int main(int argc, char *argv)
{
    int lenght = ft_str_len(&argv[1]);
    return 0;
}

/*
int	main(int argc, char *argv[])
{
    int i;
    int space

	if(argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= '1' && argv[1][i] <= '4')
            {
                write(1, "OK\n", 3);
                //inicializar

            }
            else if (argv[1][i] == ' ')
                space++;
            // else if(ft_str_len(argv[1] !=))
            // {
            //     ft_message_error();
            //     return 1;
            // }
            else
            {
                ft_message_error();
                return 1;
            }
            i++;
        }
    }
    else 
        ft_message_error();
}

*/