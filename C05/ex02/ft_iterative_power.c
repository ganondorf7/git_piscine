/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosado- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:55:31 by trosado-          #+#    #+#             */
/*   Updated: 2026/02/19 02:14:50 by trosado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	power_of;

	power_of = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		power_of = power_of * nb;
		power--;
	}
	return (power_of);
}
/*
#include <stdio.h>
int	main()
{
	int	nb = 3;
	int	power = 4; 
	return 0;
}
*/
