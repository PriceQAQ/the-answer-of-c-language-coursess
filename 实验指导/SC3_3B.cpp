#include <stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a)
		{
		if ( a==b && a==c && b==c) 
			printf("Equilateral Triangle");
		else
			printf("Isosceles Triangle");}
	else 
		printf ("Triangle");
 	return 0;
 } 
