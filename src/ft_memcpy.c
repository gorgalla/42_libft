void    *ft_memcpy(void *dest, void *src, unsigned int n)
{
    unsigned    char *destination;
    unsigned    char *origin;
    unsigned    int i;
    unsigned    int k;

    origin = (unsigned char *)src;
    destination = (unsigned char *)dest;
    i = 0;
    k = 0;
    while (i <= n)
    {
        destination[k] = origin[k];
        k++;
        i++;
    }
    
}
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hola, mundo!";
  char str2[10];

  ft_memcpy(str2, str1, sizeof(str1));

  printf("str2: %s\n", str2);

  return 0;
}

/*#include <stdio.h>
int main(void)
{
    unsigned char str1[] = "- Yatusae \n + No, yo no se :(";
    unsigned char str2[30];
    ft_memcpy(str2, str1, sizeof(str1));
    printf("Str2: %s\n", str2);
    return (0);

}*/