#include <stdio.h>
int a,b;
int main()
{
	scanf("%d %d",&a,&b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
