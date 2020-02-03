#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d %*c %d",&a,&b);
	printf("%d\n",a+b);
 	return 0;
 } 
 // %*s 中表示读入后不给予赋值 
