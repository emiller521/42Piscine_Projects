void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int	i;
	int	o;
	int	j;

	o = 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
		o++;
	}
	return (0);
}