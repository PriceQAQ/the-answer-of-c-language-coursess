#include <stdio.h>
int main()
{
	int a[20];
	int i,min;
	//freopen("C4_1B.in", "r", stdin);
	//freopen("C4_1B.out", "w", stdout);
	for (i=0;i<20;i++)
		scanf("%d",&a[i]);
	//***********************************
	min=a[0];
	for(i=0;i<20;i++)
		{
		if (a[i]<min)
		min= a[i];}
	//===================================
	printf("%d",min);
	return 0;
}
