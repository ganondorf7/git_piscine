/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosado- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:55:31 by trosado-          #+#    #+#             */
/*   Updated: 2026/02/12 17:00:15 by trosado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int nb_tothepower_of;

	if (power < 0)
		return(0);
	if (power == 0 && nb == 0)
		return(1)
	while (power >= 1)
		nb_tothepower_of = nb * nb;
		power--;
	return(nb_tothepower_of);
}
