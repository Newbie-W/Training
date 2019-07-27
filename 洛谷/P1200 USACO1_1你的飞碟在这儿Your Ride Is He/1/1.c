#include <stdio.h>
#include <string.h>
int transfer(char c)
{
	return c-'A'+1;
}
int main()
{
	char comet[7], group[7];
	char ans[2][5]={"STAY","GO"};
	int n1,n2;
	int i;
	memset(comet, 0, 7);
	memset(group, 0, 7);
	while (scanf("%s%s", comet, group) != EOF)
	{
		n1=1;
		n2=1;
		for (i=0; i<7; i++)
		{
			if (comet[i]!=0) n1 *= transfer(comet[i]);
			if (group[i]!=0) n2 *= transfer(group[i]);
		}
		/*不可以写作如下，因为长度不等，不一定就为6。
		n1 = (transfer(comet[0]) * transfer(comet[1]) 
			* transfer(comet[2]) * transfer(comet[3])
			* transfer(comet[4]) * transfer(comet[5])) % 47;
		n2 = (transfer(group[0]) * transfer(group[1]) 
			* transfer(group[2]) * transfer(group[3])
			* transfer(group[4]) * transfer(group[5])) % 47;
		*/
		n1 %= 47;
		n2 %= 47;
		printf("%s\n", ans[n1==n2]);
		memset(comet, 0, 7);
		memset(group, 0, 7);
	}
	return 0;
}