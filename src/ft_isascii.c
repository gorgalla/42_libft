int ft_isascii(int n)
{
    return (n >= 0 && n <= 127);
}
/*
#include<stdio.h>
int main(void)
{
    char ascii;
    printf("Escribe un caracter: ");
    scanf("%c", &ascii);
    if (ft_isascii(ascii) != 0)
        printf("Es un caracter Ascii\n");
    else
        printf("No es un caracter Ascii\n");
}*/