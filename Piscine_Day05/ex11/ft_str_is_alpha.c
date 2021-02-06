int	ft_char_is_alpha(char *c)
{
	if (('a' <= *c && *c <= 'z')
		|| ('A' <= *c && *c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_char_is_alpha(str))
			return (0);
		str++;
	}
	return (1);
}