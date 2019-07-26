/*
	试计算在区间1到n的所有整数中，数字x(0≤x≤9)共出现了多少次？例如，在1到11中，即在 1,2,3,4,5,6,7,8,9,10,11 中，数字1出现了4次。
*/

/*本来想的很复杂，以为会有一些数学上的巧妙之处，结果没想到直接暴力就可以*/

#include <stdio.h>
int a[11]={0};

void count(int n)
{
    while (n != 0)
    {
        a[n%10]++;
        n = n / 10;
    }
}

void fun(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        count(i);
    }
}

int main()
{
    int n, x, ans;
	int i=0;
    while (scanf("%d %d",&n, &x) != EOF)
    {
		for (i=0; i<11; i++)
		{
			a[i]=0;
		}
        fun(n);
        printf("%d\n", a[x]);
    }
    return 0;
}