#include <stdio.h>
#include<math.h>
int sum(int a,int n) {
	int i;
	long sn,sum=0;
 		sn=0;
	 for(i=1;i<=n;i++){
 		sn=a+sn*10;
 		sum=sum+sn;
	 }
	 return sum;
}
int main ()
{
	int a,n;
	scanf("%d%d",&a,&n);
	printf("%ld",sum(a,n));
 } 
