int	ft_char_is_printable(char *c)
{
	if (' ' <= *c && *c <= '~')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_char_is_printable(str))
			return (0);
		str++;
	}
	return (1);
}