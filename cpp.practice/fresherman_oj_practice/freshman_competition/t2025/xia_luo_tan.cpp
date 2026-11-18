#include<bits/stdc++.h>
using namespace std;

int pan(){
	long long a,b,x,y,c,d,v,s,n;
	cin>>a>>b>>x>>y
	>>c>>d>>v>>s>>n;
	if((a-x)<0){s+=abs(a-x);a=abs(a-x);}
	if((b-y)<0){s+=abs(b-y);b=abs(b-y);}
	long long sum_cost=((a+b+n)*v+s);
	if(sum_cost<(x+y)*v)return 0;
	else{
		if(((a+c)>=x)&&((b+d)>=y)){
			return 1;
		}else return 0;
	}
}
int main(){
	int i,t;
	cin>>t;
	for(i=0;i<t;i++){
		if(pan()){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
