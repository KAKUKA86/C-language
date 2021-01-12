#include <stdio.h>
/*
Description
Your task is to calculate the sum of some integers.
Input
Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line.
Output
For each test case you should output the sum of N integers in one line, and with one line of output for each line in input.
Sample Input
4 1 2 3 4
5 1 2 3 4 5
Sample Output
10
15
*/
int main(void)
{
	int N, i, sum = 0, u;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (u = 0; u < N; u++)
		{
			int arr[u];
			scanf("%d", &arr[u]);
			sum += arr[u];
		}
		printf("%d\n", sum);
		sum = 0;
		scanf("%d", &N);
	}
	return 0;
}
