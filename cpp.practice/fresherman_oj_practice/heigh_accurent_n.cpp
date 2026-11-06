#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int a[5555555];

int jie(int n);
void p_s(int len,int n);

int main() {
	int n,len;
	cin>>n;
	len=jie(n);
	p_s(len,n);
	return 0;
}














int jie(int n) {
	int len=1,i,jin,j,t;
	a[0]=1;
	if(n==0||n==1) {
	} else {
		for(i=2; i<=n; i++) {
			jin=0;
			for(t=0; t<len; t++) {
				j=i*a[t]+jin;
				a[t]=j%10;
				jin=j/10;
			}
			while(jin!=0) {
				a[len]=jin%10;
				jin/=10;
				len++;
			}
		}
	}
	return len;
}

void p_s(int len,int n) {
	int i;
	cout<<n<<"!=";
	for(i=len-1; i>=0; i--) {
		if(i==0) {
			cout<<a[i]<<endl;
		} else {
			cout<<a[i];
		}
	}
}
