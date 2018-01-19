//problem 9
//用变步长梯形求积法计算定积分
#include <stdio.h>
#include <math.h>   
#include <stdlib.h>	
double area(double down,double up,double eps);
double f(double x);
int main(void)
{	
	double eps=1.0e-08;
	double down=0,up=1;
	double s=area(down,up,eps);
	printf("The integral value is %.8lf\n",s);
}
double f(double x)//the function
{
	double y;
	y= exp(-x*x);
	return y;
}
double area(double down,double up,double eps)//calculate the area
{
	int loops=1;
	double S1=0,S2=0,step=up-down;
	do 
	{
		S2=S1;
		S1=0.0;
		double a=0,b=step;
		double y1=f(a);
		double y2=f(b);
		for (int i=1;i<=loops;i++)
		{
			S1+=step/2.0*(y1+y2);
			y1=y2;
			b+=step;                                                              
			y2=f(b);
		}
		loops*=2;
		step/=2.0;
	} while (fabs(S1-S2)>=eps);
	return S1;
}

