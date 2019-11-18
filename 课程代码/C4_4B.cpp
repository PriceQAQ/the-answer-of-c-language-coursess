#include <stdio.h>
int main()
{
	int b[20][20],a[20]={0};
	int n,m,i,j;
	//freopen("C4_4B.in", "r", stdin);
	//freopen("C4_4B.out", "w", stdout);
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	//**************************************
	for (j=0;j<m;j++){
		i=0;
		a[j]=b[i][j];
		for(i=0;i<n;i++)
			if(a[j]>b[i][j]){
				a[j]=b[i][j];
							}
					 } 
	for (i=0;i<m;i++)
		printf("%d ",a[i]);
	//=======================================
	return 0;
}
