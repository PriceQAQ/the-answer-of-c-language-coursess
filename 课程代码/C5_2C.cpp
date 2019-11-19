#include <stdio.h>
int main() {
int m,n;
int ack(int m,int n);
scanf("%d%d",&m,&n);
printf("%d",ack(m,n));
return 0;
}
int ack(int m,int n){
	int f;
	if (m==0) f=n+1;
	else if (n==0) f=ack(m-1,1);
	else if (m>0 && n>0) f=ack(m-1,ack(m,n-1));
	return f;
}
