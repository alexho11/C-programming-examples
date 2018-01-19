//problem 9
//下述函数需要从输入的字符串 const char* strPathName 中提取出文件的标题，然后存入输出参数 char* strTitle中。
//例如：输入的字符串为”d:\\Test\\sub01\\main.cpp”，那么函数返回的strTitle中存放的字符串为”main”。编程实现函数GetFileTitle。
#include<stdio.h>
#include <string.h>
void* GetFileTitle(const char* strPathName, char* strTitle);
int main(void)
{
	char *p=NULL,*q=NULL;
	char str[128]={'0'};
	strcpy(str,"d:\\Test\\sub01\\main.cpp");
	printf("%s",GetFileTitle(str,p));
	
}
void* GetFileTitle(const char* strPathName, char* strTitle)
{
	int i=strlen(strPathName);
	for ( i=strlen(strPathName);i>=0;i--)
	{
		if (strPathName[i]=='\\')
		break;
	}
	*strTitle=strPathName[i];
	return strTitle;
}