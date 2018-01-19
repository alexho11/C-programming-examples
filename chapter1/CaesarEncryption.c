
//problem 8
//已知最古老的加密技术是凯撒加密。该方法把一条消息中的每个字母用字母表中固定距离之后的那个字母来替代(如果越过了Z
//会绕回到字母表的起始位置。例如每个字母都用字母表中两个位置之后的字母代替，那么Y就被替代为A，Z就被替代为B)。
//编写程序用凯撒方法加密。用户输入待加密的消息和移位计数。
// Enter message to be encrypted: Go ahead, make my day.
// 	Enter shift amount [1-25]: 3
// 	Encrypted message: Jr dkhdg, pdnh pb gdb. 
// 
// 	提示：注意大小写字符！
#include <stdio.h>
#include <string.h>
int main(void)
{
	int amt=0;
	char str[128]={'\0'};
	printf("Enter message to be encrypted:");
	gets(str);
	printf("Enter shift amount [1-25]:");
	scanf(" %d",&amt);
	int i=0;
	printf("Encrypted message:");
	for(int j=0;j<=strlen(str);j++)
	{
		if ((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
		{
			if(str[i]+amt>=65&&str[i]+amt<=90||(str[i]+amt>=97&&str[i]+amt<=122))
				printf("%c",str[i]+amt);
			else if (str[i]<=90&&str[i]+amt>=90)
			{
				printf("%c",str[i]+amt-90+65);
			}else if (str[i]<=122&&str[i]+amt>=122)
			{
				printf("%c",str[i]+amt-122+97);
			}
		}
		else
			printf("%c",str[i]);
		i++;
	}

}