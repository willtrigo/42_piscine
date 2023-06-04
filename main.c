/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:20:46 by gmendonc          #+#    #+#             */
/*   Updated: 2023/06/03 21:57:53 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_message_error(void);
int		main(int argc, char *argv[]);
int		ft_str_len(char *str);
void	ft_putchar(char c);
void	ft_print_number(int num);

int	main(int argc, char *argv[])
{
	int i;
	int space;
	// int len;

	space = 0;
	if(argc == 2)
	{
		// len = ft_str_len(argv[1]);
		// ft_print_number(len);
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
			else if(ft_str_len(argv[1]) != 32)
			{
				ft_message_error();
				return 1;
			}
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

// int inicializar()
// {
// 	// code
// }

void	ft_print_number(int num)
{
	int	num_ascii;
	
	num_ascii = 48;
	if (num == -2147483647)
		write (1, "-2147483647", 11);
	else if(num > 0)
	{
		if (num < 10)
			ft_putchar(num + num_ascii);
		else
		{
			ft_print_number(num / 10);
			ft_putchar((num % 10) + num_ascii);
		}
	}
	else
	{
		ft_putchar('-');
		ft_print_number(num);
	}
}

void	ft_message_error(void)
{
	write(1, "Error\n", 6);
}


