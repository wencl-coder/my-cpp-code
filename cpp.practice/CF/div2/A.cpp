#include<bits/stdc++.h>
using namespace std;

void swa(int&a,int&b){
	int t=a;a=b;b=t;
}

int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		int n,x;
		cin>>n;
		x=n;
		if(n<=3){
			cout<<"-1"<<endl;
		}
		else{
			if(n&1){
				while(x>0){
					if(x==n)cout<<(x-1)<<' ';
					else if(x==(n-1))cout<<(n)<<' ';
					else if(x==2)cout<<'1'<<' ';
					else if(x==1)cout<<'2'<<endl;
					else cout<<x<<' ';
					x--;
				}
			}
			else{
				for(;x>0;x--){
					printf("%d%c",x,x==1?'\n':' ');
				}
			}
		}
	}
	return 0;
}
