#include <stdio.h>
#include<math.h>
int main ()
{
int a[100];
int i,n,c,k;
scanf("%d",&n);
for (i=0;i<n;i++) scanf("%d",&a[i]);
c=abs(a[0]-60);
k=0;
for (i=0;i<n;i++)
	if (abs(a[i]-60)>c){
		c=abs(a[i]-60);
		k=i;
	}
	printf("%d",a[k]);
	return 0;
 } 
