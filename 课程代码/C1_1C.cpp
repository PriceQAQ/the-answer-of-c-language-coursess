#include <stdio.h>
const double PI=3.14159;
int main()
{
	int R,H;
    double Surface_area;
	freopen("C1_1C.in", "r", stdin);
	//freopen("C1_1C.out", "w", stdout);
	//************************************************
scanf("%d",&R);
scanf("%d",&H);
Surface_area = 2*PI*R*R + 2*PI*R*H ;
printf("%.4f",Surface_area);
	//================================================
	return 0;
}
