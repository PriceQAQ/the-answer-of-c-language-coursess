#include <stdio.h>
int a,b;
int max,min;
int main()
{
scanf("%d%d",&a,&b);
max = b>a?b:a;
min = a<b?a:b;
printf("%d %d",max,min);
return 0;
}

