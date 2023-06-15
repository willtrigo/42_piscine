/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:56:46 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/14 23:30:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_ex02(char *str);

int	main(int agrc, char **agrv)
{
	int i;

	i = agrc;

	if (agrc > 1)
	{
		while (i > 1)
		{
			ft_putstr_ex02(agrv[i - 1]);
			ft_putstr_ex02("\n");
			i--;
		}
	}
	return (0);
}

void	ft_putstr_ex02(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
