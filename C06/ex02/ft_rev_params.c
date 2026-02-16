#include <unistd.h>

int	main(int ac, char** av)
{
	int	j;

	ac = ac - 1;
	while (ac >= 1)
	{
		j = 0;
		while (av[ac][j])
		{
			write(1, &av[ac][j], 1);
			j++;
		}
		write(1, "\n", 1);
		ac--;
	}
	return 0;
}
