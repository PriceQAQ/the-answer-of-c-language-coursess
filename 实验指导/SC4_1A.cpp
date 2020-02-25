#include <stdio.h>
#include<math.h>
int main ()
{
int a[10];
int i,q,flag=0;
scanf("%d",&q);
for (i=0;i<10;i++) scanf("%d",&a[i]);
for(i=0;i<10;i++)
	if (a[i]==q){
		flag=1;
		break;
	}	
	if (flag) printf("Yes");
	else printf("No");
	return 0;
 } 
