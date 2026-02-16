/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosado- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:06:58 by trosado-          #+#    #+#             */
/*   Updated: 2026/02/16 21:55:16 by trosado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
//if return (0) file in not valid >>> "map error\n"
//if return (1) file is valid
int	get_objects(char* file, char** aray_of_objects, int* cords)
{
	char	map[500];
	int		i;
	int	fd;
	int	j;

	i = 0;
	fd = open(file, O_RDONLY);
	read(fd, map, 500);
	if (map[0] <= '9' && map[0] >= '0')
	{
		while (map[i] != '\n')
			i++;
		i--;
		aray_of_objects[3] = &map[i];
		i--;
		aray_of_objects[2] = &map[i];
		i--;
		aray_of_objects[1] = &map[i];
		cords[1] = 0;
		j = 0;
		while (map[j] <= '9' && map[j] >= '0' && i > j)
		{
			cords[1] = (cords[1] * 10) + map[j] - '0';
			j++;
		}
	}	
	else
		return (0);
	cords[0] = 0;
	while (map[i] != '\n')
	{
		i++;
	}
	i++;
	while (map[i] != '\n')
	{
		cords[0]++;
		i++;
	}
/*
All lines of the map must have the same length.

There is at least one line of at least one cell on the map.

The characters on the map can only be those introduced in the first line.*/
return 0;
}
