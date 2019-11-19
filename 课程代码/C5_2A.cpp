#include <stdio.h>
int main() {
int x,n;
int fact(int x,int n);
scanf("%d%d",&x,&n);
printf("%d",fact(x,n));
return 0;
}
int fact(int x,int n){
	int f;
	if (n==1) f=x;
	else f=x*fact(x,n-1);
	return f;
}
