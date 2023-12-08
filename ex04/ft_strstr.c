/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:32:19 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/13 16:22:44 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*c_check;
	char	*to_find_check;

	to_find_check = to_find;
	if (to_find_check == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			c_check = str;
			while (1)
			{
				if (*to_find_check == 0)
					return (str);
				if (*to_find_check != *c_check)
					break ;
				to_find_check++;
				c_check++;
			}
			to_find_check = to_find;
		}
		str++;
	}
	return (0);
}
