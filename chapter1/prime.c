//problem 4
//将输入的正整数分解质因数，例如：输入的正整数为120, 那么输出为：120=2*2*2*3*5。
#include <stdio.h>
#include <math.h>
bool prime(int a);//judge a number is a prime or not
int main(void)
{ 
	int n;
	scanf("%d",&n);
	if (prime(n))
	{
		printf("%d=%d",n,n);
	}else {
		printf("%d=",n);
	}
	for(int i=2;i<=n;i++)
	{
		if(prime(i))
		{
			while(!(n%i))
			{
				printf("%d",i);
				n/=i;
				if(n>1)
					printf("x");
			}	
		}
	}
}

bool prime(int a)
{
	for (int i=2;i<a-1;i++)
	{
		if (a%i==0)
			return false;
	}
	return true;
}