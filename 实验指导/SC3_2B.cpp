#include <stdio.h>
#include<math.h>
int main ()
{
	int score;
	scanf("%d",&score);
	if (score>=60 && score<90) printf("Pass");
	else if (score>=90) printf ("Excellent");
	else if (score>=0 && score<60) printf("No Pass");
 	return 0;
 } 
