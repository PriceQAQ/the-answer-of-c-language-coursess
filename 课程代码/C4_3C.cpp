#include <stdio.h>
int main()
{
	int b[5][5];
	int i,j;
//	freopen("C4_3C.in", "r", stdin);
//	freopen("C4_3C.out", "w", stdout);
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			scanf("%d",&b[i][j]);
	//*************************************
	for (i=1,j=0;i<5;i++,j++)	{b[i][j]=b[i][j]+b[j][i];}
	for (i=2,j=0;i<5;i++,j++) 	{b[i][j]=b[i][j]+b[j][i];}
	for (i=3,j=0;i<5;i++,j++)	{b[i][j]=b[i][j]+b[j][i];}
	for (i=4,j=0;i<5;i++,j++)	{b[i][j]=b[i][j]+b[j][i];}
	for (i=0,j=1;i<4;i++,j++) 	{b[i][j]=0;}
	for (i=0,j=2;i<3;i++,j++) 	{b[i][j]=0;}
	for (i=0,j=3;i<2;i++,j++) 	{b[i][j]=0;}
	for (i=0,j=4;i<1;i++,j++) 	{b[i][j]=0;}
 	for (i=0;i<5;i++)
		{for (j=0;j<5;j++)
		printf("%d ",b[i][j]);
		printf("\n");}
	//======================================
	return 0;
}
