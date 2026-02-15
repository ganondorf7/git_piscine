/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosado- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:46:52 by trosado-          #+#    #+#             */
/*   Updated: 2026/02/15 21:43:21 by trosado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb = nb * nb;
		return (ft_recursive_power(nb, (power - 1)));
	}
return (0);
}
#include <stdio.h>


int	main()
{
	int nb;
	int power;
	nb = 0;
	power = 0;
	
	printf("%d to the power of %d id %d", nb , power, ft_recursive_power(nb, power) );
	return 0;
}
