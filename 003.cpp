#include<stdio.h>
int main()
{
	static float numble[10];//����static����numble[10] 
	float max=0,min=0; 
	for(int i=0;i<=9;i++)
	{
		printf("������һ��������:");
		scanf("%f",&numble[i]);//��������Ԫ��numble[i]
		getchar();
		max=((max>numble[i])?max:numble[i]);//��Ŀ����� (?:),ȡ max�� min 
		min=((min<numble[i])?min:numble[i]);
		printf("max=%g\nmin=%g\n\n",max,min);//ʹ��%g�������ַ��Ľ�� 
	}
	for(int a=0;a<=9;a++)
	{
		printf("numble[%d]=%g\n",a,numble[a]);//��forѭ����ӡ����numble[10] 
	}
}

