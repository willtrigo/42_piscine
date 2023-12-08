/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:03:11 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/12 19:57:21 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_lenstr_ex03(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_lenstr_ex03(dest);
	src_len = ft_lenstr_ex03(src);
	i = 0;
	while (i < nb)
	{
		if (i < (dest_len + src_len))
			dest[dest_len + i] = src[i];
		else
			break ;
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	ft_lenstr_ex03(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
