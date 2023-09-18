void    *ft_bzero(void *dest, unsigned int n)
{
    unsigned char  *str = (unsigned char *)dest;
    unsigned int i;

    i = 0;
    while (i <= n)
    {
        *str = '\0';
        str++;
        i++;
    }
    
}
/*
#include <stdio.h>
int main(void)
{
    char buffer[10];
    ft_bzero(buffer, sizeof(buffer));
    for (int i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] != '\0') {
            printf("El búfer no está relleno con bytes nulos.\n");
            return 1;
        }
    }

    printf("El búfer está relleno con bytes nulos.\n");
    return 0;
}*/