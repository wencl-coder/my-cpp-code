#include<stdio.h>
int main(){
	FILE*pf=fopen("test.txt","w");
	if(pf==NULL){
		perror("fopen");
		return 1;
	}
	printf("success\n");
	return 0;
}
