#include <stdio.h>
int main()
{
	int a[10];
	int i,sum;
	float avg;
	//freopen("C4_1C.in", "r", stdin);
	//freopen("C4_1C.out", "w", stdout);
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	//************************************
	sum = 0;
	for(i=0;i<10;i++) sum=sum+a[i];	
	avg=sum/(10.0);
	sum=0;
	for(i=0;i<10;i++)
		{
		if(a[i]>avg)
		sum++;}
	//====================================
	printf("%3.1f %d",avg,sum);
	return 0;
}
