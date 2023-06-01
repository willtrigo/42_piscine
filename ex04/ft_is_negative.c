/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:18:08 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/01 13:32:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_negative(int n);
void	ft_putchar_ex04(char c);

int	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar_ex04('P');
	else
		ft_putchar_ex04('N');
	return (0);
}

void	ft_putchar_ex04(char c)
{
	write(1, &c, 1);
}
