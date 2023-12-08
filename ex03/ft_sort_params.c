/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 02:09:56 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/15 10:22:08 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_ex03(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_agrvs(int max, char *argv[]);

int	main(int argc, char **argv)
{
	int		i;
	int		next_i;
	char	*swap;

	i = 1;
	while (argv[i])
	{
		next_i = i + 1;
		while (argv[next_i])
		{
			if (ft_strcmp(argv[i], argv[next_i]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[next_i];
				argv[next_i] = swap;
			}
			next_i++;
		}
		i++;
	}
	ft_print_agrvs(argc, argv);
	return (0);
}

void	ft_print_agrvs(int max, char *argv[])
{
	int	i;

	i = 1;
	while (i < max)
	{
		ft_putstr_ex03(argv[i]);
		ft_putstr_ex03("\n");
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

void	ft_putstr_ex03(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
