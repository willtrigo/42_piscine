/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:56:47 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/11 01:53:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	ft_is_capitalize(char str);
void	ft_capitalize(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	capitalize;

	i = 0;
	capitalize = 'T';
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capitalize == 'T')
		{
			ft_capitalize(str, i);
			capitalize = 'F';
		}
		else
			capitalize = ft_is_capitalize(str[i]);
		i++;
	}
	return (str);
}

void	ft_capitalize(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

char	ft_is_capitalize(char str)
{
	if (str == ' ')
		return ('T');
	else if (str >= 'a' && str <= 'z')
		return ('F');
	else if (str >= '0' && str <= '9')
		return ('F');
	else
		return ('T');
}
