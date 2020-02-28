#include <stdio.h>
#include <string.h>
int main ()
{
struct student
{
	int num;
	char name[10];
	int score[3];
	float avg;
};
struct student stu[20];
int n,i,sum,flag=0;
scanf("%d",&n);
for (i=0;i<n;i++){
	scanf("%d%s",&stu[i].num,stu[i].name);
	scanf("%d%d%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
} 
for (i=0;i<n;i++){
	stu[i].avg=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	if ((stu[i].avg>=90)||(stu[i].score[0]>=85 && stu[i].score[1]>=85 && stu[i].score[2]>=85)){
		flag=1;
		printf("%d %s\n",stu[i].num,stu[i].name);
	}
}
if(flag==0) printf("No");
return 0;
 } 
