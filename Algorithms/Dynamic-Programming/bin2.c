#include <stdio.h>
#include <stdlib.h>

int minimum(int n, int m)
{
	if(n < m)
		return n;
	else
		return m;
}

int bin2(int n, int k)
{
	int i, j;
	int ** B = (int **)malloc(sizeof(int*)*(n+1));
	for(int i = 0; i < n+1; i++)
		B[i] = (int *)malloc(sizeof(int)*(k+1));

	for (i = 0; i <= n; i++)
		for (j = 0; j <= minimum(i,k); j++)
			if ( j == 0 || j == i)
				B[i][j] = 1;
			else
				B[i][j] = B[i-1][j-1] + B[i-1][j];
	
	int res = B[n][k];

	for(int i = 0; i < n+1; i++)
		free(B[i]);
	free(B);


	return res;
}

int main(void)
{
	printf("\n%d\n", bin2(4,2));

	return 0;
}
	
