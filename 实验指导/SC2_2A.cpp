#include<stdio.h>
#include<math.h>
int main()
{
 int year;
 scanf("%d",&year);
 printf("%s\n",((year%4==0 && year%100!=0)||(year%400==0))?"YES":"NO");
 return 0;
 } 
