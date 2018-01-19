//problem 5
//编写一个使字符串逆转的程序
#include <stdio.h>
#include <string.h>
void main(){
	char string1[128] = "0"; 
	scanf("%s",string1);
	int nLen = strlen(string1);//calculate the lenth of string
	for (int i=0; i<nLen/2; i++){
		char t = string1[i];
		string1[i] = string1[nLen-1-i];
		string1[nLen-1-i] = t;
	}
	printf("%s\n", string1);
}
