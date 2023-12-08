/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:06 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/15 03:19:12 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int		nb_ascii;
	char	nb_str;

	nb_ascii = 48;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0)
	{
		if (nb < 10)
		{
			nb_str = nb + nb_ascii;
			write(1, &nb_str, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			nb_str = (nb % 10) + nb_ascii;
			write(1, &nb_str, 1);
		}
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
