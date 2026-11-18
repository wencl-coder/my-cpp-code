#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	if(a<b){
		long long t=a;a=b;b=t;
	}
	while(b!=0){
		long long r=a%b;
		a=b;b=r;
	}
	return a;
}

int main(){
	int t,T,I;
	cin>>T;
	for(t=0;t<T;t++){
		long long n,K,i,Dsum=0;
		cin>>n>>K;
		long long D[n]={0};
		for(i=0;i<n;i++){
			int m,c,b,mi;
			cin>>m>>b>>c;
			for(I=0;I<m;I++){
				cin>>mi;
				D[i]+=mi;
			}
			D[i]-=(b+c);
			Dsum+=D[i];
		}
		long long r=gcd(abs(Dsum),abs(K));
		Dsum/=r,K/=r;
		cout<<Dsum<<" "<<K<<endl;
	}
	return 0;
}
