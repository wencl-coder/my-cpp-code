#include<bits/stdc++.h>
using namespace std;

void de(long long a,long long b,long long c,long long&d){
	d=sqrt(((a*a)+(b*b)-(c*c)));
}

int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		long long a,b,c,d;
		cin>>a>>b>>c;
		de(a,b,c,d);
		cout<<d<<endl;
	}
}

//sqrt返回为浮点数，如果返回值过大会输出科学计数法；
