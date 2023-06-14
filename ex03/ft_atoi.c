/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:18:28 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/14 13:45:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
int		ft_valid_isspace(char *str);

#define TRUE 1
#define FALSE 0

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (*str && (ft_valid_isspace(str) == TRUE))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	nb *= sign;
	return (nb);
}

int	ft_valid_isspace(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n')
		return (TRUE);
	else if (*str == '\r' || *str == '\t' || *str == '\v')
		return (TRUE);
	return (FALSE);
}
