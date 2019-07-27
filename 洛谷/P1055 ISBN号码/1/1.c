//注意读题，所得的余数即为识别码，如果余数为10，则识别码为大写字母X
//反之，输出时，注意X的情况。
/*几组需要注意的数据
输入
0-670-82162-4
0-670-82162-0
6-670-82162-X
6-670-82162-9

输出：
Right
0-670-82162-4
Right
6-670-82162-X
*/

#include <stdio.h>
int main()
{
	char isbn[14];		//格式x-xxx-xxxxx-x
	int ans;
	while (scanf("%s",isbn) != EOF)
	{
		ans = (isbn[0]-'0')*1 + (isbn[2]-'0')*2 + (isbn[3]-'0')*3 
			+ (isbn[4]-'0')*4 + (isbn[6]-'0')*5 + (isbn[7]-'0')*6 
			+ (isbn[8]-'0')*7 + (isbn[9]-'0')*8 + (isbn[10]-'0')*9;
		ans %= 11;
		if (ans == (isbn[12]-'0') || (ans==10 && isbn[12]=='X')) 
		{
			printf("Right\n");
		}
		else 
		{
			if (ans==10) isbn[12]='X';
			else isbn[12] = ans+'0';
			printf("%s\n",isbn);
		}
	}
	return 0;
}
/*
//下面这种方式不行，-与-之间的看做为一个数了（而非三五个数），还需要取出每一位，才能继续做。所以感觉不如上面的方便
#include <stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,a6,a7,a8,a9;
	char code;
	int ans;
	while (scanf("%d-%d%d%d-%d%d%d%d%d-%c",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&code) != EOF)		//格式x-xxx-xxxxx-x
	{
		ans = a1*1 + a2*2 + a3*3 
			+ a4*4 + a5*5 + a6*6 
			+ a7*7 + a8*8 + a9*9;
		ans %= 11;
		printf("%d %d\n", a1,a2);
		if (ans == 10 && code == 'X') printf("Right\n"); 
		else if (ans == 10 && code != 'X') 
		{
			printf("%d-%d%d%d-%d%d%d%d%d-X\n",a1,a2,a3,a4,a5,a6,a7,a8,a9);
		} 
		else if (ans == code-'0') printf("Right\n");
		else printf("%d-%d%d%d-%d%d%d%d%d-%d\n",a1,a2,a3,a4,a5,a6,a7,a8,a9,ans);
	}
}
*/