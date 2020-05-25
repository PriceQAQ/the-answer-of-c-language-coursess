#include <stdio.h>
#define p(a,b) a%b
int main ()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for (;m<=n;m++){
		if(p(m,3)==0 && p(m,7)==0)
			printf ("%d ",m);	
	}
 return 0;
 }
  
