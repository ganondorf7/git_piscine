/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosado- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:51:44 by trosado-          #+#    #+#             */
/*   Updated: 2026/02/12 16:39:29 by trosado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	while (nb > 1)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}

/*int	main()
{
	int i = 0;
	while (i < 10)
	{
		printf("%d \n" , ft_iterative_factorial(i));
		i++;
	}
	return(0);
}*/
