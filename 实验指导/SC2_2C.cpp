#include<stdio.h>
#include<math.h>
int main()
{
	char job;
	int salon,years;
	scanf("%s",&job);
	scanf("%d%d",&salon,&years);
	if ((job == 106 || job==121 || job==103||job == 122||job==115) && years>9) 
		printf("%d",salon+500);
	else
		printf("%d",salon);
	return 0;
 } 
