#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
char s[200050];
char t[200050];

int minest(){
	int lens=strlen(s),lent=strlen(t);
	while(lens!=0&&lent!=0&&s[lens-1]==t[lent-1]){
		lens--;
		lent--;
	}
	return lent+lens;
}

int main(){
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s>>t;
		cout<<minest()<<endl;
	}
	return 0;
}
