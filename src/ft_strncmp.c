int	ft_strncmp(char *str1, char *str2, int n)
{
	int	size1;
	int	size2;
	int	i;
	int	j;

	size1 = 0;
	size2 = 0;

	i = 0;
	j = 0;
	while (i < n && str1[i] != '\0' && str2[j] != '\0' && str1[i] == str2['\0' && str1[i] == str2[j]])
	{
		size1++;
		size2++;
		i++;
		j++;
	}
	if (size1 == size2)
		return (0);
	else if (size1 < size2)
		return (-1);
	else
		return (1);
}
