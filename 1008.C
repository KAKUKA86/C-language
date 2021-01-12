#include <stdio.h>
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