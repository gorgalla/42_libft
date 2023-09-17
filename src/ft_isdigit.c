int	ft_isdigit(int d)
{
	return(d >= '0' && d <= '9');
}
/*
#include <stdio.h>  
int main(void)
{
    char ch;
    printf("Ingrese un carácter: ");
    scanf("%c", &ch);
    
    if (ft_isdigit(ch) != 0)
        printf("Es un numero!.\n");
    else
        printf("No es un numero :(\n");
        
    return 0;
}*/