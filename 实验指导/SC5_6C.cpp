#include <stdio.h>
#define MAX(a,b,c) c>(a>b?a:b)?c:(a>b?a:b)
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",MAX(a,b,c));
 return 0;
 }
  
