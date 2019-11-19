#include <stdio.h>
int main() {
int a,b;
int temp;
int min(int a,int b);
scanf("%d%d",&a,&b);
printf("%d",min(a,b));
return 0;
}
int min (int a,int b){
int result=0;
result = (a<b?a:b);
return result;
}
