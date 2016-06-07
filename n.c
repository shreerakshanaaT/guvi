#include <stdio.h>
int r,n,rem;
int main()
{
	scanf("%d",&n);
	while(n!= 0)
	{
        int rem = n%10;
        r= r*10 + rem;
        n=n/10;
    }
    printf("%d",r);
	return 0;
}
