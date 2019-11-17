#include <stdio.h>
int a,b,c,d,f;
int main() 
{
	scanf("%d",&a);
    b=a%10;
	c=(a-a%100)/100;
	d=(a-b-c*100)/10;
	printf("%d%d%d",b,d,c);
	return 0;
}
