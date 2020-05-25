#include <stdio.h>
#include<math.h>
int fun(int m,int n) {
	for (;m<=n;m++)
	{
		int i;
		for (i=2;i<m;i++) if (m%i==0) break;
		if (i==m) printf ("%d ",m);
	}
}
int main ()
{
	int m,n;
	scanf("%d%d",&m,&n);
	fun(m,n);
return 0;
 } 
