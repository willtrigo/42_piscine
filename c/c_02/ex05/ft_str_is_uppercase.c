/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:45:36 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/08 15:38:25 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str);
int		ft_lenstr_ex05(char *str);
char	ft_is_uppercase(char str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	char_type;

	i = 0;
	char_type = 1;
	while (str[i])
	{
		if (ft_lenstr_ex05(str) == 0)
		{
			char_type = 0;
			break ;
		}
		if (ft_is_uppercase(str[i]) == 'F')
		{
			char_type = 0;
			break ;
		}
		i++;
	}
	return (char_type);
}

char	ft_is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return ('T');
	else if (str == ' ')
		return ('T');
	return ('F');
}

int	ft_lenstr_ex05(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
