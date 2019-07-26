#include <stdio.h>
int main()
{
	int num[105]={0};
	int i, j, k, n, ans, flag;		//flag用于确定，该数是否已能够被其他数表示。
	while (scanf("%d", &n) != EOF)
	{
		ans = 0;
		for (i=0; i<n; i++)
		{
			scanf("%d", &num[i]);
		}
		for (i=0; i<n; i++)
		{
			flag = 0;
			for (j=0; j<n; j++)
			{
				for (k=0; k<n && k!=j; k++)
				{
					if (num[k]+num[j] == num[i])
					{
						ans++;
						//printf("## %d   %d   %d\n", i, j, k);
						//printf("## %d = %d + %d\n", num[i],num[j],num[k]);
						flag = 1;
						break;
					}
					
				}
				if (flag) break;
			}
			//if(flag) printf("## %d\n", num[i]);
		}
		printf("%d\n", ans);
	}
	return 0;
}

/*曾经的写法，部分WA，注意读题。是，其中有多少个数，恰好等于集合中另外两个（不同的）数之和，而非有多少两数能得到另一数 这样的组合。
#include <stdio.h>
int main()
{
	int num[105]={0};
	int i, j, k, n, ans;
	while (scanf("%d", &n) != EOF)
	{
		ans = 0;
		for (i=0; i<n; i++)
		{
			scanf("%d", &num[i]);
		}
		for (i=0; i<n; i++)
		{
			for (j=i+1; j<n; j++)
			{
				for (k=0; k<n; k++)
				{
					if (num[i]+num[j] == num[k])
					{
						ans++;
						printf("## %d + %d = %d\n", num[i],num[j],num[k]);
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}*/
/*
可尝试数据如下
100
6094 106 5958 877 3352 8959 292 9253 3860 448 5709 8295 4667 2588 3663 2486 1129 8870 3126 6203 727 4316 6541 9689 8818 2119 7331 7598 1879 7303 1100 8740 4567 2649 2373 7505 5848 4337 9953 4436 8395 8273 1028 4449 3363 6254 7856 6710 8422 3833 5690 6664 6326 2550 119 2075 3475 9024 3239 8889 807 543 8103 1441 9731 3873 5194 9557 3256 6245 3266 2777 4552 2390 8550 4777 9701 5694 9133 6736 2586 298 3695 1992 2958 3831 6905 8134 989 6292 8967 118 8442 1765 931 4760 5945 1703 6262 1671
输出
22
*/