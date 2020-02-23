#include<stdio.h>
#include<math.h>
int main()
{
	int a,k;
	scanf("%x%d",&a,&k);
	printf("%x",a^(1<<k-1));
 } 
