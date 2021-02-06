
int	        ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char		*ft_strcat(char *s1, const char *s2)
{
	int		len;
    int		i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i])
		s1[len++] = ((char *)s2)[i++];
	s1[len] = 0;
	return (s1);
}