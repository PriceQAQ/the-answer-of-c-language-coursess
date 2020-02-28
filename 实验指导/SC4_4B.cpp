#include <stdio.h>
int main ()
{
int b[20][20];
int n,m,i,j,k,temp;
 scanf("%d",&n);
 scanf("%d",&m); 
for (i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
for (i=0;i<n;i++)
	for (j=0;j<m-1;j++)
		for (k=0;k<m-1-j;k++)
			if(b[i][k]<b[i][k+1]){
				temp=b[i][k];
				b[i][k]=b[i][k+1];
				b[i][k+1]=temp;
			} 
for (j=0;j<m;j++)
	for (i=0;i<n-1;i++)
		for(k=0;k<n-1-i;k++)
			if(b[k][j]<b[k+1][j]){
				temp=b[k][j];
				b[k][j]=b[k+1][j];
				b[k+1][j]=temp;
			}
for (i=0;i<n;i++){
	for(j=0;j<m;j++)
		printf("%d ",b[i][j]);
	printf("\n");
	}
 return 0;
 } 
