#include<stdio.h>
#include<string.h>
int main()
{
	char r[100];
	int a=0,i,n;
	scanf("%s",r);
	n=strlen(r);
	for(i=0;i<n;i++)
	{
		if(r[i]=='I')
		{
			a=a+1;
		}
			else if(r[i]=='V')
		{
			a=a+5;
		}
		else if(r[i]=='X')
		{
			a=a+10;
		}
		else if(r[i]=='L')
		{
			a=a+50;
		}
			else if(r[i]=='C')
		{
			a=a+100;
		}
			else if(r[i]=='D')
		{
			a=a+500;
		}
			else if(r[i]=='M')
		{
			a=a+1000;
		}
		else
		{
			printf("not a romen letter");
		}
	}
	printf("%d",a);
	return 0;
