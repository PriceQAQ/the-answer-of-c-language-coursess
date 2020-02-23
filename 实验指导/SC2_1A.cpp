#include<stdio.h>
#include<math.h>
int main()
{
	int x,n;
	double k;
	scanf("%d%d",&x,&n);
	k=pow(10,n);
	printf("%d\n",(int)(sqrt(x)*k)%10);
	return 0;
 } 
