#include <stdio.h>
#include<math.h>
int main ()
{
int a[100];
int i,n,c,k,sum=0,avg;
double st;
scanf("%d",&n);
for (i=0;i<n;i++) scanf("%d",&a[i]);
for (i=0;i<n;i++) sum=sum+a[i];
avg=sum/n;
sum=0;
for (i=0;i<n;i++){
	sum=sum+(a[i]-avg)*(a[i]-avg);
}
st=sqrt(sum/(n-1));
	printf("%.3lf",st);
	return 0;
 } 
