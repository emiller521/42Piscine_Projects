#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*s;
	char	*backup;
	int		i;
	int		j;

	s = NULL;
	backup = NULL;
	if (argc > 0)
	{
		s = malloc(sizeof(argv));
		backup = s;
		i = 1;
		while (i < argc)
		{
			j = 0;
			if (i != 1)
				*s++ = '\n';
			while (argv[i][j] != '\0')
				*s++ = argv[i][j++];
			++i;
		}
		*s = '\0';
	}
	return (backup);
}