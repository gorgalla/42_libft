char	ft_strrchr(char *str, int c)
{
	int	i;
	int	strlen;

	strlen = str;
	i = strlen - 1;
	while (str[i] == c)
		i--;
	return (c);
}
