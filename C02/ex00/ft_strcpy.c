
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int zero;

	zero = 0;
	while (src[zero] != '\0')
	{
		dest[zero] = src[zero];
		zero++;
	}

	dest[zero] = '\0';

	return(dest);
}
