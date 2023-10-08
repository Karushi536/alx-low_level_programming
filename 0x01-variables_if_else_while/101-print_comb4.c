#include <stdio.h>
/**
 * main - Prints all possible combinations
 * Return: Always 0.
 */
int main(void)
{
int i, j, k;
for (int i = 0; i <= 7; i++)
{
for (int j = i + 1; j <= 8; j++)
{
for (int k = j + 1; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return 0;
}
