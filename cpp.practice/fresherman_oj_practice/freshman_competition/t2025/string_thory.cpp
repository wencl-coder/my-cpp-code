#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long long cala(int*a,int n){
	int i,j;
	long long sum=0;
	for(i=0;i<n/2;i++){
		for(j=n/2;j<n;j++){
			sum+=abs(a[i]-a[j]);
		}
	}
	return sum;
}

int main(){
	int t,n,j,x;
	cin>>t;
	for(x=0;x<t;x++){
		cin>>n;
		int a[n];
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		cout<<cala(a,n)<<endl;
	}
	return 0;
}

