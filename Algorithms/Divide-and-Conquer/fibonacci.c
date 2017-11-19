#include <stdio.h>

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fibonacci(n-2) + fibonacci(n-1);
}

int main(void)
{
	int n = 10;

	printf("fibonacci %d : %d \n", n, fibonacci(n));

	return 0;
}
