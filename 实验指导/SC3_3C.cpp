#include <stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	double p,j,s;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a)
		{
		if ( a==b && a==c && b==c) 
			printf("Equilateral Triangle");
		else
			printf("Isosceles Triangle");}
	else 
		printf ("Triangle"); 
	p=0.5*(a+b+c);
	j=p*(p-a)*(p-b)*(p-c);
	s=sqrt(j);
	printf("\n%.2lf",s);
	return 0;
 } 
