//problem 7
//由用户输入两个日期，日期的格式为：2017-01-01，然后计算出两天之间相隔的天数。
#include <stdio.h>
#include <math.h>

int lunar(int year);

int main(void)
{
	int year1,year2,month1,month2,day1,day2,sum1=0,sum2=0,x;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter a date:");
	scanf("%d-%d-%d",&year1,&month1,&day1);
	printf("Enter anther date:");
	scanf("%d-%d-%d",&year2,&month2,&day2);
	for (month1;month1>=1;month1--)
	{
		sum1+=a[month1];
	}
	sum1+=year1*365+day1;
	sum1+=lunar(year1);
	for (month2;month2>=1;month2--)
	{
		sum2+=a[month2];
	}
	sum2+=year2*365+day2;
	sum2+=lunar(year2);
	x=abs(sum1-sum2);
	printf("%d",x);
}

int lunar(int year){
	int cnt=0;
	for (year;year>3;year--)
	{
		if (year%4==0&&year%100!=0||year%400==0)
			cnt++;
	}
	return cnt;
}