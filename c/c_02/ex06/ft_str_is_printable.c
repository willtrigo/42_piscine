/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:27:32 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/08 13:59:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);
int		ft_lenstr_ex06(char *str);
char	ft_is_printable(char str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	char_type;

	i = 0;
	char_type = 1;
	while (str[i])
	{
		if (ft_lenstr_ex06(str) == 0)
		{
			char_type = 0;
			break ;
		}
		if (ft_is_printable(str[i]) == 'F')
		{
			char_type = 0;
			break ;
		}
		i++;
	}
	return (char_type);
}

char	ft_is_printable(char str)
{
	if (str >= ' ' && str <= '~')
		return ('T');
	return ('F');
}

int	ft_lenstr_ex06(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
