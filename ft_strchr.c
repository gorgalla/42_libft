char	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while(str[i] == c)
		i++;
	return (c);
}
