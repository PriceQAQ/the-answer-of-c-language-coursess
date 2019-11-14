#include <stdio.h>
int a,b,c,d,f;//234
int main() 
{
	scanf("%d",&a);
	b=a%10;//个位数的计算 
	c=(a-a%100)/100;//百位数的计算 
	d=a-b-c*100;
	f=b*100 + c + d;
	printf("%03d",f);
	return 0;
}
