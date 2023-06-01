/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:28:21 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/01 11:33:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar_ex03(char c);

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar_ex03(num);
		num++;
	}
}

void	ft_putchar_ex03(char c)
{
	write(1, &c, 1);
}
