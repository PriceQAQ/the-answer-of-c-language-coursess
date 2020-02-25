#include <stdio.h>
#include<math.h>
int main ()
{
int a[100];
int i,n,c,k,sum=0,avg;
scanf("%d",&n);
for (i=0;i<n;i++) scanf("%d",&a[i]);
for (i=0;i<n;i++) sum=sum+a[i];
avg=sum/n;
c=abs(a[0]-avg);
k=0;
for (i=0;i<n;i++)
	if (abs(a[i]-avg)>c){
		c=abs(a[i]-avg);
		k=i;
	}
	printf("%d",a[k]);
	return 0;
 } 
