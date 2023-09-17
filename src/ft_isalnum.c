int	ft_isalnum(int x)
{
	return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) || (x >= '0' && x <= '9');
}
/*
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Ingrese un carácter: ");
    scanf("%c", &ch);
    
    if (ft_isalnum(ch) != 0)
        printf("El carácter es alfanumérico.\n");
    else
        printf("El carácter no es alfanumérico.\n");
        
    return 0;
}*/
