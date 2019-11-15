#include <stdio.h>
const double PI=3.14159;
int main()
{
	int R;
    double volume;
	freopen("C1_1B.in", "r", stdin);
	//freopen("C1_1B.out", "w", stdout);
	//************************************************
scanf("%d",&R);
volume = 4*PI*R*R*R/3;
printf("%.5f",volume);  
	//================================================
	return 0;
}
