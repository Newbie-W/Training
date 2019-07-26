#include <stdio.h>

int main()
{
	int n, i, j;
	int ans[105], fish[105];
	while (scanf("%d", &n) != EOF)
	{
		for (i=0; i<105; i++)
		{
			fish[i] = 0;
			ans[i] = 0;
		}
		for (i=0; i<n; i++)
		{
			scanf("%d", &fish[i]);
			for (j=0; j<i; j++)
			{
				if (fish[j] < fish[i]) ans[i]++;
			}
		}
		for (i=0; i<n; i++)
		{
			if (i != 0) printf(" ");
			printf("%d", ans[i]);
		}
		printf("\n");
	}
}