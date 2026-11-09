#include<stdio.h>
int main(){
	FILE*pf=fopen("D:\\studyyyyyyyyyyyyyyyy\\CODE  FILE\\my-cpp-code/test.txt","r");
	if(pf==NULL){
		perror("fopen");
		return 1;
	}
	printf("success\n");
	fclose(pf);
	pf=NULL;
	return 0;
}
