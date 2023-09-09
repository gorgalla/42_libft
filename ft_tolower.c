char	ft_tolower(char c)
{
	if ( 65 >= c && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
