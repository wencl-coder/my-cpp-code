#include<bits/stdc++.h>
using namespace std;

class shu{
public:
	void setk(){
		cin>>b;
	}
	void ggcd(){
		int a=(100-b),r;
		if(a<b){
			int t=a;a=b;b=t;
		}
		while(b){
			r=a%b;
			a=b;b=r;
		}
		cout<<(100/a)<<endl;
	}
	int b;
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	shu pp;
	while(t--){
		pp.setk();
		pp.ggcd();
	}
	return 0;
}
