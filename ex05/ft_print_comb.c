/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:53:11 by dande-je          #+#    #+#             */
/*   Updated: 2023/05/30 21:29:18 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ex05_ft_putchar(char c);
void	print_numbers(char hundred, char dicker, char unit);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	hundred;
	char	dicker;
	char	unit;

	hundred = '0';
	dicker = '1';
	unit = '2';
	while (hundred <= '7')
	{
		while (dicker <= '8')
		{
			while (unit <= '9')
			{
				print_numbers(hundred, dicker, unit);
				unit++;
			}
			unit = dicker++;
		}
		dicker = hundred++;
	}
}

void	print_numbers(char hundred, char dicker, char unit)
{
	if (hundred == '7' && dicker == '8' && unit == '9')
	{
		ex05_ft_putchar(hundred);
		ex05_ft_putchar(dicker);
		ex05_ft_putchar(unit);
	}
	else
	{
		ex05_ft_putchar(hundred);
		ex05_ft_putchar(dicker);
		ex05_ft_putchar(unit);
		ex05_ft_putchar(',');
		ex05_ft_putchar(' ');
	}
}

void	ex05_ft_putchar(char c)
{
	write(1, &c, 1);
}
