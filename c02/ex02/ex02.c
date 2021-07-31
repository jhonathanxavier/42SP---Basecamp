#include <stdio.h>
int ft_str_is_alpha(char *str);
int main(void)
{
 char str1[] = "Basecamp42";
 char str2[] = "ListaDeExercicios";
 printf("\nstr1= %s\n", str1);
 printf("%d\n", ft_str_is_alpha(str1));
 printf("\nstr2 = %s\n", str2);
 printf("%d\n\n", ft_str_is_alpha(str2));
}
