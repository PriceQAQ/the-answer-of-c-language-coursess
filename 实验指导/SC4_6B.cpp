#include <stdio.h>
#include <string.h>
int main ()
{
struct student
{
	int num;
	char name[10];
	int score;	
};
struct student stu[20];
int n,i,flag=0;
scanf("%d",&n);
for (i=0;i<n;i++){
	scanf("%d%s",&stu[i].num,stu[i].name);
	scanf("%d",&stu[i].score);
} 
for (i=0;i<n;i++)
	if (stu[i].score>=90){
		flag=1;
		printf("%d %s %d\n",stu[i].num,stu[i].name,stu[i].score);
	}
	if(flag==0) printf("No");
return 0;
 } 
