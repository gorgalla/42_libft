int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}
/*
#include<stdio.h>
int	main(void)
{
	char	print;
	printf("Introduce un caracter imprimible: ");
	scanf("%c", &print);
	if (ft_isprint(print) != 0)
		printf("Es un caracter imprimible!\n");
	else
		printf("No es un caracter imprimible :(\n");
	
}*/