/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:18:08 by dande-je          #+#    #+#             */
/*   Updated: 2023/05/31 20:04:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_negative(int n);
void	ex04_ft_putchar(char c);

int	ft_is_negative(int n)
{
	if (n < 0)
		ex04_ft_putchar('N');
	else
		ex04_ft_putchar('P');
	return (0);
}

void	ex04_ft_putchar(char c)
{
	write(1, &c, 1);
}
