#include <stdio.h>
float a,b,c;
float the_sum;
double the_atv;
float max,min;
int main()
{
	scanf("%f%f%f",&a,&b,&c);
    max = c>(a>b?a:b)?c:(a>b?a:b);
    min = c<(a<b?a:b)?c:(a<b?a:b);
	the_sum = a + b+ c;
	the_atv = the_sum/3;
	printf("%.1f %.1f %.1f %.1f",max,min,the_sum,the_atv);
	return 0 ;
}
