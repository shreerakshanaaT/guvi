#include <stdio.h>
int main(void) {
	char s[100];
	int i,n,c,k;
	scanf("%s",s);
	n=strlen(s);
	c=0;
	k=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='(')
		{
			c++;
		}
		else
		{
			k++;
		}
	}
	if(c>k)
	printf("%d",c);
	else
	printf("%d",k);
	return 0;
}
