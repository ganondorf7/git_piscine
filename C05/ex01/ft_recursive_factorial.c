/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosado- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:40:42 by trosado-          #+#    #+#             */
/*   Updated: 2026/02/12 16:53:54 by trosado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return(1);
	if (nb < 0)
		return(0);
	if ( nb > 1)
		return(nb * ft_recursive_factorial(nb -1));
	else
		return(1);
}

#include <stdio.h>
int	main()
{
	int i = 7;
	while (i >= 0)
	{
		printf("%d! is equal to:%d\n", i , ft_recursive_factorial(i));
		i--;
	}
	return(0);
}
