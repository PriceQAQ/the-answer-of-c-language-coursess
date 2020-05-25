#include <stdio.h>
#include<math.h>
double fun(double x) {
	double y;
	if (x<10)
		y=(sqrt(2.5+cos(x)))/(x*sin(x)+3);
	else
		y=x*x;
	return y;
}
int main ()
{
double x;
scanf("%lf",&x);
printf("%.3lf",fun(x));
return 0;
 } 
