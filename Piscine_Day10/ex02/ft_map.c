
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *result;

	result = (int*)malloc(sizeof(*result) * (length));
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
