#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int wqpfs(long long l,long long r){
	int cnt;
	cnt=(long long)sqrt(r)-(long long)sqrt(l-1);
	return cnt;
}

int main(){
	int n,i;
	long long l,r;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>l>>r;
		cout<<wqpfs(l,r)<<endl;
	}
	return 0;
}
