#include <stdio.h>
int main()
{
	struct student  // ����һ���ṹ������struct student
	{
		int num;
		char name[10];
		float score[3];//3�ſγ̳ɼ�
		float total;  //�ܷ�
	};
	struct student stu[3];//���庬3��Ԫ�ؽṹ������
	int i,j;
	//freopen("C4_6A.in", "r", stdin);
	//freopen("C4_6A.out", "w", stdout);
	for (j=0;j<3;j++){
		scanf("%d%s",&stu[j].num,stu[j].name);
		for (i=0;i<3;i++)
			scanf("%f",&stu[j].score[i]);
	}
	//*************************************************************
stu[0].total=0;
for (i=0;i<3;i++)
	stu[0].total=stu[0].total+stu[0].score[i];
stu[1].total=0;
for (i=0;i<3;i++)
	stu[1].total=stu[1].total+stu[1].score[i];
stu[2].total=0;
for (i=0;i<3;i++)
	stu[2].total=stu[2].total+stu[2].score[i];
printf("%d %s %.1f\n",stu[0].num,stu[0].name,stu[0].total);
printf("%d %s %.1f\n",stu[1].num,stu[1].name,stu[1].total);
printf("%d %s %.1f\n",stu[2].num,stu[2].name,stu[2].total);
	//==============================================================
	return 0;
}
