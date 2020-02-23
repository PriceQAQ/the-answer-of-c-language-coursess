#include<stdio.h>
#include<math.h>
int main()
{
	int a,k;
	scanf("%x%d",&a,&k);
	printf("%x\n",a<<k|a>>32-k);
 } 
