#include <stdio.h>
#include <string.h>
int main()
{
	FILE *pFile = NULL;
	pFile = fopen("/tmp/file_0001","r");
	if(pFile != NULL){
		char strTemp[150];
		while(!feof(pFile)){
			fgets(strTemp,sizeof(strTemp),pFile);
			strTemp[strlen(strTemp)-1]='\n';
			printf("%s",strTemp);
		}
		fclose(pFile);
	}
	return 0;
}
		
