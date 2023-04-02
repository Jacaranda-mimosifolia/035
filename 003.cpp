#include<stdio.h>
int main()
{
	static float numble[10];//创建static数组numble[10] 
	float max=0,min=0; 
	for(int i=0;i<=9;i++)
	{
		printf("请输入一个浮点数:");
		scanf("%f",&numble[i]);//输入数组元素numble[i]
		getchar();
		max=((max>numble[i])?max:numble[i]);//三目运算符 (?:),取 max和 min 
		min=((min<numble[i])?min:numble[i]);
		printf("max=%g\nmin=%g\n\n",max,min);//使用%g输出最短字符的结果 
	}
	for(int a=0;a<=9;a++)
	{
		printf("numble[%d]=%g\n",a,numble[a]);//用for循环打印数组numble[10] 
	}
}

