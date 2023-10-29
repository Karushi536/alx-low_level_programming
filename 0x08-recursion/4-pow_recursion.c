#include "main.h"
#include <stdio.h>
double power(double x, int y)
{
	if (y < 0)
	{
		return (-1.0);
	}
	else if (y == 0)
	{
		return (1.0);
	}
	else
	{
		return x * power(x, y - 1);
	}
}
int main(void)
{
	double x = 2.0;
	int y = 3;
	double result = power(x, y);
	if (result == -1.0)
	{
		printf("Invalid exponent. Result is -1.\n");
}
else
{
	printf("%f raised to the power of %d is %f\n", x, y, result);
}
return (0);
}
