#include <stdio.h>
#include<math.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (floor(sqrt(a+b))==(sqrt(a+b)) && floor(sqrt(a-b))==(sqrt(a-b))) printf("Yes");
	else printf ("No");
 	return 0;
 } 
