/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:30:27 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/06 10:47:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_len(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	len;

	i = 0;
	len = ft_str_len(dest);
	while (((unsigned int)i) < n)
	{
		if (i < len)
			dest[i] = src[i];
		else
			break ;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
