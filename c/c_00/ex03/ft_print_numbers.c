/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:28:21 by dande-je          #+#    #+#             */
/*   Updated: 2023/05/30 21:22:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ex03_ft_putchar(char c);

void	ex03_ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		ex03_ft_putchar(num);
		num++;
	}
}
