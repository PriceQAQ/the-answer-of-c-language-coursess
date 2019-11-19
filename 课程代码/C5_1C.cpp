#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b;
	int sum(int a,int b);
	scanf("%d%d",&a,&b);
	printf("%d",sum(a,b));
	return 0;
}
int sum (int a,int b){
	int result=0;
	result =abs(a)+abs(b);
	return result;
}
