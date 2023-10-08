#include <stdio.h>
/**
 * main - Prints entry numbers
 * Description: prints char below 10
 * Return: (0)
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
