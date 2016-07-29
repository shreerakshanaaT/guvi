#include<stdio.h>
int main()
{
	int n,c=0,i;
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
{
	if(i%2!=0)
	{
		c++;
	}
}	
if(c%2!=0)
{
	c=(c*-1)+2;
}
else
{
	c=c+2;
}
printf("%d",c);
}
else
{
	printf("0");
}
return 0;
}
