#include<bits/stdc++.h>
using namespace std;

class cal{
	public:    
	cal(){
		int n=0;
	}
	void setN(){
		cin>>n;
	}
	int ji(){
		n=(n+1)/10;
		return n;
	}
private:
	int n;
};

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	cal s;
	while(t--){
		int n;
		s.setN();
		n=s.ji();
		cout<<n<<'\n';
	}
	return 0;
}
