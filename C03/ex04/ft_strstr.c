#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	if (to_find[0] == '\0')
		return (str);
	size = 0;
	while (to_find[size])
		size++;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (j < size && str[i + j] == to_find[j])
				j++;
			if (j == size)
				return (str + i);
		}
		i++;
	}
	return (0);
}
