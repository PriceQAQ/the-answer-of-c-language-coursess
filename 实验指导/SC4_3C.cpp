#include <stdio.h>
#include<math.h>
int main ()
{
int b[5][5];
int i,j,n;
for (i=0;i<5;i++)
	for(j=0;j<5;j++)
		scanf("%d",&b[i][j]);
for(i=0,n=0;i<5;i++)
	{
	n++;
	for (j=0;j<n;j++)	b[i][j]=b[i][j]+10;
	}
for(i=0,n=0;i<4;i++)
	{n++;
	for (j=5;j>=n;j--)
		b[i][j]=b[i][j]-10;
	}
for (i=0;i<5;i++)
	{for(j=0;j<5;j++)
		printf("%d ",b[i][j]);
	printf("\n");	
	}  
	return 0;
 } 
 
