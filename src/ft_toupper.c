char	ft_toupper(char c)
{
	if (97 >= c && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
