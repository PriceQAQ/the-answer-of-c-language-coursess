#include <stdio.h>
const double ic =3.2808;
int main()
{	
	double H;
    double feet;
	freopen("C1_2A.in", "r", stdin);
	//freopen("C1_2A.out", "w", stdout);
	//************************************************
scanf("%f",&H);
feet = ic * H ;
printf("%.4f",feet);
	//================================================
	return 0;
}
