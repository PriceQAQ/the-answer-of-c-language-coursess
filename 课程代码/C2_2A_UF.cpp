#include <stdio.h>
int a,b,c;
int main() 
{
	scanf("%d",&a);
	b=(a-a%10)/10;
	a=a%10;
	c=b+a*10;
	printf("%02d",c);
	return 0;
}
