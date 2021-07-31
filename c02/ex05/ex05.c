#include <stdio.h>

int ft_str_is_printable(char *str);
int main(void)
{
char str1[1];
char str2[] = "Basecamp42";
str1[0] = '0';
printf("\nstr1= %s\n", str1);
printf("%d\n", ft_str_is_printable(str1));
printf("\nstr2 = %s\n", str2);
printf("%d\n\n", ft_str_is_printable(str2));
}
