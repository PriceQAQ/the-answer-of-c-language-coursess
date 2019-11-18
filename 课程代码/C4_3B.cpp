#include <stdio.h>
int main()
{
	int b[4][5],a[5]={0};
	int i,j;
	//freopen("C4_3B.in", "r", stdin);
	//freopen("C4_3B.out", "w", stdout);
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
			scanf("%d",&b[i][j]);
	//************************************		
for(j=0;j<5;j++)
	for(i=0;i<4;i++)
	a[j]+=b[i][j];
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	//====================================
	return 0;
}
