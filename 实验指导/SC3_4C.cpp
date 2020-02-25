#include <stdio.h>
#include<math.h>
int main ()
{
	int i,m,n,j,k;
	int a,b,c,d;
	scanf("%d%d",&m,&n);
	for (;m<=n;m++)
	{
		for (i=2;i<m;i++) if (m%i==0) break;
		if (i==m)
		{
			a=m%10;
			b=m%100-a;
			c=(m-a-b)/100;
			if (m>100) d=a*100+b+c;
			else d=b/10+a*10;
			for (j=2;j<d;j++) if (d%j==0) break; 
			if (d==j) printf("%d ",m);
		}
	}
 	return 0;
 } 
