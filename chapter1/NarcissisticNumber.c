//problem 2
//有些三位数称为“水仙花”数，即每位数的立方和等于该数本身。
#include <stdio.h>
#define N 1000
bool NarcissisticNumber(int x);
int main(void)
{
	for (int i=100;i<N;i++)
	{
		if (NarcissisticNumber(i))
		{
			printf("%d",i);
			printf("\n");
		}

	}
}
bool NarcissisticNumber(int x)
{
	int a=0,b=0,c=0,d=0;
	d=x;
	a=d%10;//个位
	d/=10;
	b=d%10;//十位
	d/=10;
	c=d;//百位

	if (a*a*a+b*b*b+c*c*c!=x)
	return false;


	return true;
}