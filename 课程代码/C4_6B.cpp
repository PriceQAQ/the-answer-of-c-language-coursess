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
	freopen("C4_6B.in", "r", stdin);
	freopen("C4_6B.out", "w", stdout);
	for (j=0;j<3;j++){
		scanf("%d%s",&stu[j].num,stu[j].name);
		for (i=0;i<3;i++)
			scanf("%f",&stu[j].score[i]);
	}
	//**********************************************************

	










	//============================================================
	return 0;
}