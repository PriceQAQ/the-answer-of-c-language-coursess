#include <stdio.h>
#include<math.h>
double fun(double x) {
	double y;
	if (x>=0)
		y=(3*x*sin(x)+tan(x) )/(1.5+x);
	else
		y=(3*x*sin(x)+tan(x) )/(1.5-x);
	return y;
}
int main ()
{
double x;
scanf("%lf",&x);
printf("%.3lf",fun(x));
return 0;
 } 
