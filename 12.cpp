#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

		// The Queen - permutations //

//Function Queen
int n, P[21], H[21], R[41], L[41], counter = 0;
void Queen(int k)
{
	int i, j;
	for (i=1 ; i <=n; i++)
		if (H[i] == 0 && R[21 - (k-i)] == 0 && L[k + i] == 0)
		{
			P[k] = i; H[i] = 1; R[i - k + 21] = 1; L[i + k] = 1;
			if (k == n)
			{
				counter++;
				//for (j = 1; j <= n; j++) printf("%2d ", P[j]);
				//printf("\n");
			}
			else Queen(k + 1);
			H[i] = 0; R[i - k + 21] = 0; L[i + k] = 0;
		}
}
//Main function
void main()
{
	int i;
	printf("Enter the board size: ");
	scanf("%d", &n);
	printf("The Board %dx%d, queen arrangements:%c", n, n, '\n');
	for (i = 1; i <= n;i++) H[i] = 0;
	for (i = 2; i <= n + n;i++)
	{
		R[i] = 0; L[i] = 0;
	}
	printf("\n");
	Queen(1);
	printf("%cNumber of answers: %d%c", '\n', counter, '\n');
}
