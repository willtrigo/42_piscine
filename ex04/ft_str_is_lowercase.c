/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 21:24:02 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/08 15:38:35 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str);
int		ft_lenstr_ex04(char *str);
char	ft_is_lowercase(char str);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	char_type;

	i = 0;
	char_type = 1;
	while (str[i])
	{
		if (ft_lenstr_ex04(str) == 0)
		{
			char_type = 0;
			break ;
		}
		if (ft_is_lowercase(str[i]) == 'F')
		{
			char_type = 0;
			break ;
		}
		i++;
	}
	return (char_type);
}

char	ft_is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return ('T');
	else if (str == ' ')
		return ('T');
	return ('F');
}

int	ft_lenstr_ex04(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
