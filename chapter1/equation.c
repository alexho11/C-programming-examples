//problem 3
//从屏幕上输入三个双精度数a, b, c，然后编程求解一元二次方程 ax2 + bx + c = 0的根，然后把方程的根打印到屏幕上。
#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,d,x1,x2,i;
	printf("Enter a b c:");
	scanf("%lf %lf %lf",&a,&b,&c);

	d=b*b-a*4*c;//calculate delta
	if (d>=0)
	{
		x1=(-b+sqrt(d))/2/a;
		x2=(-b-sqrt(d))/2/a;
		printf("X1=%lf\n",x1);
		printf("X2=%lf\n",x2);
	}else if (d<0)
	{
		x1=-b/2/a;
		i=sqrt(4*a*c-b*b);
		printf("X1=%lf+%lf/2/a\n",x1,i);
		printf("X2=%lf-%lf/2/a\n",x1,i);
	}
}