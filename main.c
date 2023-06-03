/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmendonc <gmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:20:46 by gmendonc          #+#    #+#             */
/*   Updated: 2023/06/03 17:20:03 by gmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_message_error(char n)
{
    write(1, "Error ", 6);
    write(1, "Error ", 6);
}

int	main(int argc, char *argv[])
{
    int i;
    int k;

	if(argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= '1' && argv[1][i] <= '4')
                write(1, "OK\n", 3);
            else if (argv[1][i] == ' ')
                write(1, "OK\n", 3);
            else if(i > 31)
                ft_message_error();
            else
                ft_message_error();
            i++;
        }
    }
    else 
        ft_message_error();
}

