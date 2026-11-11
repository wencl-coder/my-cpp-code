#include<bits/stdc++.h>
using namespace std;

void han(int n,char A,char B,char C){
	if(n==1){
		cout<<A<<"->"<<C<<endl;
		return;
	}
	han(n-1,A,C,B);
	cout<<A<<"->"<<C<<endl;
	han(n-1,B,A,C);
}


