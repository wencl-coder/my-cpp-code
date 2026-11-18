#include<bits/stdc++.h>
using namespace std;
#define mo 998244353

long long pan(char*a,long long n){
	long long i,cnt=0;
	int p=0;
	for(i=0;i<n;i++){
		if(a[i]=='I'){
			cnt++;
			cnt%=mo;
			p=1;
		}
		if((a[i]=='L')&&(p==1)){
			cnt++;
			cnt%=mo;
			p=2;
		}
		if((a[i]=='O')&&(p==2)){
			cnt++;
			cnt%=mo;
			p=2;
		}		if((a[i]=='I')&&(p)){
			cnt++;
			cnt%=mo;
			p=2;
		}		if((a[i]=='I')&&(p)){
			cnt++;
			cnt%=mo;
			p=2;
		}		if((a[i]=='I')&&(p)){
			cnt++;
			cnt%=mo;
			p=2;
		}		if((a[i]=='I')&&(p)){
			cnt++;
			cnt%=mo;
			p=2;
		}
	}
	cnt=cnt*cnt%mo;
	return cnt;
}

int main(){
	long long n,i;
	cin>>n;
	char*a=(char*)malloc(n*sizeof(char));
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	cout<<pan(a,n)<<endl;
	free(a);
	a=NULL;
	return 0;
}
