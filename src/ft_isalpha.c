int    ft_isalpha(char isalpha)
{
	return(isalpha >= 'a' && isalpha <= 'z' || isalpha >= 'A' && isalpha <= 'Z');
}
/*
#include <stdio.h>
int	main (void)
{
	char ch;
    printf("Ingrese un carácter: ");
    scanf("%c", &ch);
    
    if (ft_isalpha(ch) != 0)
        printf("Es una letra!.\n");
    else
        printf("El caracter no es una letra :(\n");
        
    return 0;
}*/