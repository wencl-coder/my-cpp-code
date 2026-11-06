#include<stdio.h>
#include<string.h>

typedef struct duru {
	char data[30];
} dr;

typedef struct jiancha {
	char data[30];
	int cnt;
} jc;

int scan_s1(dr*word) {
	int i;
	for(i=0;; i++) {
		fgets(word[i].data,sizeof(word[i].data),stdin);
		word[i].data[strcspn(word[i].data,"\n")]='\0';
		if(!strcmp(word[i].data,"")) {
			break;
		}
	}
	return i;
}
int scan_s2(jc*shouwd){
	int t;
	for(t=0;; t++) {
		if(fgets(shouwd[t].data,sizeof(shouwd[t].data),stdin)==NULL) {
			break;
		}
		shouwd[t].data[strcspn(shouwd[t].data,"\n")]='\0';
	}
	return t;
}

void cmp(dr*word,jc*shouwd,int i,int t){
	int x,y;
	for(x=0;x<t;x++){
		shouwd[x].cnt=0;
		for(y=0;y<i;y++){
			if(strncmp(word[y].data,shouwd[x].data,strlen(shouwd[x].data))==0){
				shouwd[x].cnt++;
			}
		}
	}
}

void p_s(jc*shouwd,int t){
	int i;
	for(i=0;i<t;i++){
		printf("%d\n",shouwd[i].cnt);
	}
}

int main(){
	int i,t;
	dr word[1000];
	jc shouwd[1000];
	i=scan_s1(word);
	t=scan_s2(shouwd);
	cmp(word,shouwd,i,t);
	p_s(shouwd,t);
	return 0;
}
