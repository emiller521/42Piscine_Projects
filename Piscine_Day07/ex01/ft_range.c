#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (a);
	i = 0;
	while (min < max)
	{
		a[i++] = min;
		++min;
	}
	return (a);
}