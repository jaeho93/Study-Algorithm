#include <stdio.h>
#include <stdlib.h>

#define no_edge 100
#define itself  0

#define num 5

const int W[num+1][num+1] = {
								{},
								{0,itself,1,no_edge,1,5},
								{0,9,itself,3,2,no_edge},
								{0,no_edge,no_edge,itself,4,no_edge},
								{0,no_edge,no_edge,2,itself,3},
								{0,3,no_edge,no_edge,no_edge,itself}
							};

int D[num+1][num+1] = {};

void floyd(int n)
{
	int i,j,k;

	for(i = 1; i <= num; i++)
		for(j = 1; j <= num; j++)
			D[i][j] = W[i][j];

	for(k = 1; k <= n; k++)
		for(i = 1; i <= n; i++)
			for(j = 1; j <= n; j++)
				if(D[i][j] > (D[i][k] + D[k][j]))
					D[i][j] = D[i][k] + D[k][j];
}

int main(void)
{
	int i,j;

	floyd(num);

	for(i = 1; i <= num; i++)
		for(j = 1; j <= num; j++)
			printf("D[%d][%d] = %d\n", i, j, D[i][j]);

	return 0;
}

