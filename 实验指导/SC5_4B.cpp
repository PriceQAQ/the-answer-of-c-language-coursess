#include <stdio.h>
#include<math.h>
int find(int a[],int n) {
	int i,c,k,sum=0,avg=0;
	c=abs(a[0]-avg);
	k=0;
	for (i=0;i<n;i++)
		sum=sum+a[i];
		avg=sum/n;
	for (i=1;i<n;i++)
		if (fabs(a[i]-avg)>c){
			c=fabs(a[i]-avg);
			k=i;
		}
	return a[k];
}
int main ()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",find(a,n));
	return 0;
 } 
