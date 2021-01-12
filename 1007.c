#include <stdio.h>
/*
Description
Your task is to calculate the sum of some integers.
Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.
Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.
Sample Input
2
4 1 2 3 4
5 1 2 3 4 5
Sample Output
10
15
*/
int main(void)
{
	int N, M, sum = 0, i, u;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &M);
		for (u = 0; u < M; u++)
		{
			int arr[M];
			scanf("%d", &arr[u]);
			sum += arr[u];
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}