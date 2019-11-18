#include <stdio.h>
int main()
{
	struct student  // 声明一个结构体类型struct student
	{
		int num;
		char name[10];
		float score[3];//3门课程成绩
		float avg;  //平均分
	};
	struct student stu[3];//定义含3个元素结构体数组
	int i,j;
	//freopen("C4_6B.in", "r", stdin);
	//freopen("C4_6B.out", "w", stdout);
	for (j=0;j<3;j++){
		scanf("%d%s",&stu[j].num,stu[j].name);
		for (i=0;i<3;i++)
			scanf("%f",&stu[j].score[i]);
	}
	//**********************************************************
for(i=0;i<3;i++)
	{stu[i].avg=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;}	
for(j=0;j<3;j++)
 	printf("%d %s%6.1f\n",stu[j].num,stu[j].name,stu[j].avg);			
	//============================================================
	return 0;
}
