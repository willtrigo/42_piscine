/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:30:25 by dande-je          #+#    #+#             */
/*   Updated: 2023/05/30 21:37:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ex06_ft_putchar(int c);
void	ft_verify_number(int col_0, int col_1);
void	ft_print_number(int col_d_0, int col_u_0, int col_d_1, int col_u_1);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	col_0;
	int	col_1;

	col_0 = 0;
	col_1 = 1;
	while (col_0 <= 99)
	{
		while (col_1 <= 99)
		{
			ft_verify_number(col_0, col_1);
			col_1++;
		}
		col_0++;
		col_1 = col_0 + 1;
	}
}

void	ft_verify_number(int col_0, int col_1)
{
	int	col_d_0;
	int	col_u_0;
	int	col_d_1;
	int	col_u_1;

	if (col_0 != col_1)
	{
		col_d_0 = col_0 / 10;
		col_u_0 = col_0 % 10;
		col_d_1 = col_1 / 10;
		col_u_1 = col_1 % 10;
		ft_print_number(col_d_0, col_u_0, col_d_1, col_u_1);
		if (!(col_0 == 98 && col_1 == 99))
		{
			ex06_ft_putchar(',');
			ex06_ft_putchar(' ');
		}
	}
}

void	ft_print_number(int col_d_0, int col_u_0, int col_d_1, int col_u_1)
{
	int	num_ascii;

	num_ascii = 48;
	ex06_ft_putchar(col_d_0 + num_ascii);
	ex06_ft_putchar(col_u_0 + num_ascii);
	ex06_ft_putchar(' ');
	ex06_ft_putchar(col_d_1 + num_ascii);
	ex06_ft_putchar(col_u_1 + num_ascii);
}

void	ex06_ft_putchar(int c)
{
	write(1, &c, 1);
}
