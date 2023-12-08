/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:54:08 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/15 10:25:44 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(int agrc, char **agrv)
{
	int	i;

	i = 1;
	if (agrc > 1)
	{
		while (i < agrc)
		{
			ft_putstr(agrv[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
