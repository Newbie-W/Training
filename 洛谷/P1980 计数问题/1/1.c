/*
	�Լ���������1��n�����������У�����x(0��x��9)�������˶��ٴΣ����磬��1��11�У����� 1,2,3,4,5,6,7,8,9,10,11 �У�����1������4�Ρ�
*/

/*������ĺܸ��ӣ���Ϊ����һЩ��ѧ�ϵ�����֮�������û�뵽ֱ�ӱ����Ϳ���*/

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