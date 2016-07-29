#include<stdio.h>
#include<string.h>
int main()
{int i,n,c=0,k;
char s[100];
gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
		k=i+1;
		break;
		}
	}
	for(i=k;s[i]!=' ';i++)
	{if(s[i]!='\0')
		c++;
	}
	printf("%d",c);
	return 0;
}
