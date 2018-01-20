//problem 12
#include <stdio.h>
#include <stdlib.h>

int SearchKeywordsInLine(const char* strLine,const char* strWord);
int SearchKeywordsInFile(const char* strFile,const char* strWord);

int main(int argc, char const *argv[])
{
	if (argc>2){
		printf("Error: The run-time parameters is necessary!\n");
		return  0;
	}
	printf("Search in file %s\n",argv[1] );
	char strKeywords[256];
	printf("Enter keywords:");
	gets_s(strKeywords);
	int nFinds=SearchKeywordsInFile(argv[1],strKeywords);
	printf("Total %d finds\n",nFinds );
	return 0;
}

int SearchKeywordsInFile(const char* strFile,const char* strWord){
	FILE* fp= nullptr;
	errno_t err= fopen_s(&fp,strFile,"rt");
	if(!fp){
		printf("Error: Can not open file %s!\n",strFile );
		return 0;
	}

	int nFinds=0;
	while(!foef(fp)){
		char strLine[256]='0';
		fgets(strLine,_countof(strLine),fp);
		nFinds+=SearchKeywordsInLine(strline,strWord);
	}

	fclose(fp);
	return nFinds;
}

int SearchKeywordsInLine(const char* strLine,const char* strWord){
	int nFinds = 0;
	int nChar = strlen(strWord);
	char* str = strstr((char *)strLine, strWord);
	while(str){
		nFinds++;
		int nLast=strlen(str);
		if(nLasts>nChar) str+=nChar;
		else break;

		str=strstr(str,strWord);
	}

	return nFinds;
}