/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:34:02 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/07 15:50:18 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);
int		ft_lenstr_ex03(char *str);
char	ft_is_numeric(char str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	char_type;

	i = 0;
	char_type = 1;
	while (str[i])
	{
		if (ft_lenstr(str) == 0)
		{
			char_type = 0;
			break ;
		}
		if (ft_is_numeric(str[i]) == 'F')
		{
			char_type = 0;
			break ;
		}
		i++;
	}
	return (char_type);
}

char	ft_is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return ('T');
	else if (str == ' ')
		return ('T');
	return ('F');
}

int	ft_lenstr_ex03(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
