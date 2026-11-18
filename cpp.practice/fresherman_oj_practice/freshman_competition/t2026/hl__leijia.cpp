#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,t;
	cin>>t;
	for(i=0;i<t;i++){
		long long m,n,h,l;
		cin>>m>>n;
		h=n*(1+n)/2;
		l=m*(1+m)/2;
		cout<<l*h<<endl;
	}
	return 0;
}


//所有格子数是行列累加相乘
