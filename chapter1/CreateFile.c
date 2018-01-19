// problem 8
// 编写在磁盘上创建多级目录的函数
//void CreateDirs(const char *strPath);
#include <stdio.h>
#include <direct.h>
#include <string.h>
void CreateDirs(const char *strPath);

int main(int argc, char const *argv[])
{
	char strFile[]="E:\\test\\level1\\level2\\level3";
	CreateDirs(strFile);
	return 0;
}

void CreateDirs(const char *strPath)
{
	int nLen=strlen(strPath);
	int i=0;
	for( i=nLen-1;i>0;i--)
	{
		if(strPath[i]=='\\')
			break;  
	}
	if (i==-1)return;
	char strParentPath[256];
	memcpy(strParentPath,strPath,i*sizeof(int));
	strParentPath[i]='\0';
	CreateDirs(strParentPath);
	_mkdir(strPath);
}
