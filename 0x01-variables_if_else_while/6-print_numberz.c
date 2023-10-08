#include <stdio.h>
/**
 * main - Prints entry numbers
 * Description: prints char below 10
 * Return: (0)
 */
int main(void)
{
int a;
for (a = '0'; a < '10'; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
