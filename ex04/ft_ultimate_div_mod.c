/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:11:21 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/06 11:37:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *div, int *mod);

void	ft_ultimate_div_mod(int *div, int *mod)
{
	int	a;
	int	b;

	a = *div;
	b = *mod;
	*div = a / b;
	*mod = a % b;
}
