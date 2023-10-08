#include <stdio.h>
/**
 * main - program thet prints the alphabet in lowercase and upper case
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
