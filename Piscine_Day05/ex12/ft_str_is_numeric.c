int	ft_char_is_numeric(char *c)
{
	if ('0' <= *c && *c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_char_is_numeric(str))
			return (0);
		str++;
	}
	return (1);
}