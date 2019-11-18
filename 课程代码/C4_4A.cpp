#include <stdio.h>
int main()
{
	int b[20][20],a[20]={0};
	int n,m,i,j;
	//freopen("C4_4A.in", "r", stdin);
	//freopen("C4_4A.out", "w", stdout);
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	//**************************************
	for (i=0;i<n;i++){
		j=0;
		a[i]=b[i][j];
		for(j=0;j<m;j++)
			if(a[i]<b[i][j]){
				a[i]=b[i][j];
							}
					 } 
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
	//=======================================
	return 0;
}
