#include <stdio.h>
int main()
{
	int b[20][20]={0};
	int n,m,i,j,k;
	int max,maxj,found,flag;
	//freopen("C4_4C.in", "r", stdin);
	//freopen("C4_4C.out", "w", stdout);
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	//******************************************
j=0;k=0;i=0;
for (i=0;i<n;i++){
	max=b[i][j];
	for (j=0;j<m;j++){
		if(b[i][j]>max){
			max=b[i][j];
			found=j;}
	}
	maxj=b[0][found];
	for (k=0;k<n;k++){
		if (maxj>b[k][found]){
			maxj=b[k][found];
		}	
	}
	if(max == maxj){
		printf("%d",max);
		break;
	}
}
	if(max != maxj){
	printf("No Saddle Point!");
}
	//===============================================
	return 0;
}
