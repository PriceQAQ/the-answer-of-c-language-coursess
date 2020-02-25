#include <stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,sum;
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
		if (sum>=285 && sum<=300) printf("Gold Medal");
		else if (sum>=270 && sum< 284) printf("Silver Medal");
		else if (sum>=240 && sum< 260) printf("Bronze Medal");
 		else if ((sum<240) && (a>=95||b>=95||c>95)) printf("Honor Medal");
		else printf("No medal");
	 return 0;
 } 
