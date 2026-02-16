#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
int     get_objects(char* file, char** aray_of_objects, int* cords);
int	main(int argc, char** argv)
{
	int		i;
	char**	objects;
	int	fd;
	int*	cords;
	objects = malloc(4);
	i = 3;
	while (i > 1)
	{
		objects[i] = malloc(1);
		i--;
	}

	get_objects(argv[1], objects, cords);
	int k = 1;
	while (k < 4){
		printf("%c\n", objects[k][0]);
		k++;
	}
	printf("codenada x%d, y%d", cords[0], cords[1]);
	return 0;
}
