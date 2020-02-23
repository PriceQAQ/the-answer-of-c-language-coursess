#include<stdio.h>
#include<math.h>
int main()
{
	int x,n;
	int k,l;
	scanf("%d%d",&x,&n);
	k=pow(10,n);
	l=pow(10,n-1);
	printf("%d\n",(int)(x*x%k)/l);
	return 0;
 } 
