#include <stdio.h>
int main()
{
	int a[10];
	int i,max;
//freopen("C4_1A.in", "r", stdin);
//freopen("C4_1A.out", "w", stdout);
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	//*********************************
	max=a[0];
	for(i=0;i<10;i++)
		{
		if (a[i]>max)
		max= a[i];} 
	//=================================
	printf("%d",max);
	return 0;
}
