//problem 1
//编写一个程序，要求用户输入一个分数，然后将其约分为最简分数。
#include <stdio.h>
int MaxCommonFactor(int a,int b);//最小公倍数
int main(void)
{
	int a=0,b=0,c=0;
	printf("Enter a fraction:");
	scanf("%d/%d",&a,&b);
	c=MaxCommonFactor(a,b);
	 if (c)//if MaxCommonFactor exist
	 {
		 a/=c;//divide with MaxCommonFactor
		 b/=c;//divide with MaxCommonFactor
	 }
	 printf("In lowest terms:%d/%d",a,b);
}
int MaxCommonFactor(int a,int b)
{
	int c=1,d,e;
	d=a;
	e=b;
	while (b!=0)//Euclidean algorithm 欧几里得算法
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

