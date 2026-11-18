#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	string s;
	cin>>t;
	while(t--){
		int i,n,a[200][200]={0},cnt=0;
		cin>>n;
		cin>>s;
		for(i=0;i<(n-1);i++){
			if(!a[s[i]][s[i+1]]){
				a[s[i]][s[i+1]]=1;
				cnt++;
			}
			/*if(p&&(a[i]==a[i+1])){
				cnt++;
				p=0;
			}
			else if(a[i]!=a[i+1]){
				cnt++;
				p=1;
			}*/
		}
		cout<<cnt<<endl;
	}
	return 0;
}
