#include <stdio.h>
float a,b;
float the_sum;
double the_atv;
int main()
{
	scanf("%f%f",&a,&b);
	the_sum = a+b;
	the_atv = the_sum/2; 
	printf("%.0f %.1lf",the_sum,the_atv);
	return 0; 
 } 
