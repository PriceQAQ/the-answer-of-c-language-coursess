#include <stdio.h>
int main()
{
	struct student  // ����һ���ṹ������struct student
	{
		int num;
		char name[10];
		float a,b,c;//�ֱ��ʾƽʱ�ɼ���ʵ��ɼ�����ĩ�ɼ�
		float score;  //�����ɼ�
	};
	struct student stu[3];//���庬3��Ԫ�ؽṹ������
	struct student temp; 
	int i,j,k;
//	freopen("C4_6C.in", "r", stdin);
//	freopen("C4_6C.out", "w", stdout);
	for (i=0;i<3;i++){
		scanf("%d%s",&stu[i].num,stu[i].name);
		scanf("%f%f%f",&stu[i].a,&stu[i].b,&stu[i].c);
	}
	//********************************************************
for(i=0;i<3;i++){stu[i].score=0;

	stu[i].score=0.1*stu[i].a+stu[i].b*0.2+stu[i].c*0.7;}
	if(stu[0].score<stu[1].score)
		{temp=stu[0];stu[0]=stu[1];stu[1]=temp;
	}
	if(stu[0].score<stu[2].score)
		{temp=stu[0];stu[0]=stu[2];stu[2]=temp;
	}
	if(stu[1].score<stu[2].score)
	{temp=stu[1];stu[1]=stu[2];stu[2]=temp;
	}
for(i=0;i<3;i++){printf("%d %s %.1f",stu[i].num,stu[i].name,stu[i].score);
printf("\n");
}

	//=============================================================
	return 0;
}
