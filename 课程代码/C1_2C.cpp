#include <stdio.h>
const double PI = 3.14159;
int main() 
{	
	double R,H;
    double V,W;
	freopen("C1_2C.in", "r", stdin);
	//freopen("C1_2C.out", "w", stdout);
	//************************************************
scanf("%lf",&R);
scanf("%lf",&H);
double ro = 7.8*10*10*10;
 V = PI*R*R*H/3;
 W = V * ro;
printf("%.6f\n",V);
printf("%.4f",W);
	//================================================
	return 0;
}
