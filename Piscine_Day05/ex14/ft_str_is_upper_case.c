int	ft_char_is_uppercase(char *c)
{
	if ('A' <= *c && *c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_char_is_uppercase(str))
			return (0);
		str++;
	}
	return (1);
}