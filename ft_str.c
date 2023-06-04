/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:55:49 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/04 16:35:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_str_len(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

void	ft_print_number(int num)
{
	int	num_ascii;

	num_ascii = 48;
	if (num == -2147483647)
		write (1, "-2147483647", 11);
	else if (num > 0)
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

void	ft_print_str(char c, int i_end)
{
	int	i;

	i = 0;
	while (i < i_end)
	{
		write (1, &c, 1);
		i++;
	}
}

int	ft_check_char(char num)
{
	if ((num >= '1' && num <= '4'))
	{
		if ((num + 1) == ' ' || (num + 1) == '\0')
			return (0);
	}
	else if (num == ' ')
	{
		if ((num + 1) >= '1' && (num + 1) <= '4')
			return (0);
	}
	return (1);
}
