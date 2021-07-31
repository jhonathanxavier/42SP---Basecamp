#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main(void)
{
 char src[] = "Basecamp42";
 char dest[] = "Lista C02";
 printf("\nValor inicial de src = %s\n", src);
 printf("\nValor inicial de dest = %s\n", dest);
 
 ft_strcpy(dest, src);
 printf("\nNovo valor de dest = %s\n\n", dest);
}