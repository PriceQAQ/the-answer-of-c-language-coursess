#include <stdio.h>
#include<math.h>
int main ()
{
	int i,m,n;
	scanf("%d%d",&m,&n);
	for (;m<=n;m++)
	{
		for (i=2;i<m;i++) if (m%i==0) break;
		if (i==m) printf ("%d ",m);
	}
 	return 0;
 } 
