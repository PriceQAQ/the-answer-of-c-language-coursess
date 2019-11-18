#include <stdio.h>
int main()
{
	int b[4][5],a[4]={0};
	int i,j;
	//freopen("C4_3A.in", "r", stdin);
//freopen("C4_3A.out", "w", stdout);
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
			scanf("%d",&b[i][j]);
	//**********************************

	for(i=0;i<4;i++)
	for(j=0;j<5;j++)
	a[i]+=b[i][j];	
	for(i=0;i<4;i++)
	printf("%d ",a[i]);

	//==================================
	return 0;
}
