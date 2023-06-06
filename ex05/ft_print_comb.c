/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:53:11 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/06 11:25:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_ex05(char c);
void	print_numbers(char hundred, char dicker, char unit);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	hundred;
	char	dicker;
	char	unit;

	hundred = '0';
	while (hundred <= '7')
	{
		dicker = hundred + 1;
		while (dicker <= '8')
		{
			unit = dicker + 1;
			while (unit <= '9')
			{
				print_numbers(hundred, dicker, unit);
				unit++;
			}
			dicker++;
		}
		hundred++;
	}
}

void	print_numbers(char hundred, char dicker, char unit)
{
	ft_putchar_ex05(hundred);
	ft_putchar_ex05(dicker);
	ft_putchar_ex05(unit);
	if (!(hundred == '7' && dicker == '8' && unit == '9'))
	{
		ft_putchar_ex05(',');
		ft_putchar_ex05(' ');
	}
}

void	ft_putchar_ex05(char c)
{
	write(1, &c, 1);
}
