int	ft_char_is_lowercase(char *c)
{
	if ('a' <= *c && *c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_char_is_lowercase(str))
			return (0);
		str++;
	}
	return (1);
}