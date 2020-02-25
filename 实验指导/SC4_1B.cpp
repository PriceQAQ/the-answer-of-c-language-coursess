#include <stdio.h>
#include<math.h>
int main ()
{
int a[20];
int i,q,flag=0;
scanf("%d",&q);
for (i=0;i<20;i++) scanf("%d",&a[i]);
for(i=0;i<20;i++)
	if (a[i]==q){
		break;
	}	
	if (i<20) printf("%d",i);
	else printf("-1");
	return 0;
 } 
