#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE*fp = fopen("test.txt", "w+");
	if (fp == NULL) {
		perror("fopen");
		return 1;
	}
	fputs("abcdefg", fp);
	fseek(fp, 2, SEEK_SET);
	char a = fgetc(fp);
	printf("%c\n", a);
	fseek(fp, -2, SEEK_END);
	fprintf(fp, "%s", "helloFILE");
	fflush(fp);
	fseek(fp, -1, SEEK_CUR);
	char*b = (char*)calloc(100, sizeof(char));
	fgets(b, 2, fp);
	fprintf(stdout, "%s\n", b);
	b = (char*)realloc(b, 200);
	fseek(fp, 2, SEEK_SET);
	fscanf(fp, "%s", b);
	fprintf(stdout, "%s\n", b);
	fclose(fp);
	fp = NULL;
	free(b);
	b = NULL;
	return 0;
}
