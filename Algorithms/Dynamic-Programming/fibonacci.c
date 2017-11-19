#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	int i, res;
	int * arr;

	if(n == 0 || n == 1)
		return 1;
	else
	{
		arr = (int *)malloc(sizeof(int)*(n+1));
		arr[0] = 1; arr[1] = 1;
		for(i = 2; i <= n; i++)
			arr[i] = arr[i-2] + arr[i-1];
	}

	res = arr[n];
	free(arr);

	return res;
}

int main(void)
{
	int n = 10;

	printf("fibonacci %d = %d\n", n, fibonacci(n));

	return 0;
}
