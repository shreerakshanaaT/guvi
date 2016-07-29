#include<stdio.h>
int e=0;
int main()
{
	int e,n;
	scanf("%d",&n);
	e=cal(n);
	printf("%d",e);
return 0;
}
int cal(int s)
{
	e+=2;
	s--;
	if(s==0)
	{
		return e;
	}
	else
	{
		cal(s);
	}
}
