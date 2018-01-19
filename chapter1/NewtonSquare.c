//problem 8
//编写程序，用牛顿法计算正浮点数的平方根。算法如下：设x是用户输入的数，牛顿法需要先给出x平方根的猜测值y(例如y=1)
//后续的猜测值通过计算y和x/y的平均值得到，迭代直至达到预定的精度10-6即终止。
#include <stdio.h>
#include <math.h>
double avg(double a,double b);
int main(void)
{
	double x=0,y=1,d=0,a=1,c=0;
	double exp=10e-6;
	scanf("%lf",&x);
	while(abs(a-c)>=exp)
	{
		c=a;			//记录上次值
		d=x/y;			
		a=avg(d,y);		
		y=a;
	}
	printf("%lf",a);
}
double avg(double a,double b)
{
	double y=0;
	y=(a+b)/2;
	return y;
}