#include <stdio.h>
int main() {
int a,b;
int temp;
int max(int a,int b);
scanf("%d%d",&a,&b);
printf("%d",max(a,b));
return 0;
}
int max (int a,int b){
int result=0;
result = (a>b?a:b);
return result;
}
