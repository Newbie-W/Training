#include <stdio.h>
int main()
{
	char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
		'o','p','q','r','s','t','u','v','w','x','y','z'};
	char text[105];
	int n, i;
	while (scanf("%d", &n) != EOF)
	{
		scanf("%s",text);
		i=0;
		while (text[i] != 0) 
		{
			printf("%c", a[(text[i]-'a'+n)%26]);
			i++;
		}
		printf("\n");
	}
	return 0;
}