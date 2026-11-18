#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, i;
	cin >> t;
	for (i = 0; i < t; i++) {
		long long n;
		cin >> n;
		//		long long d = n & (n - 1);
		//		n -= 1;
		//		while (d != 0) {
		//			d &= (--n);
		//		}
		//		cout << n << endl;
		
		
		//		for(j=1;j<=n;j*=2){}
		//		cout<<(j/2-1)<<endl;
		n=n|(n>>1);//左21
		n=n|(n>>2);//左41
		n=n|(n>>4);//左81
		n=n|(n>>8);//左161
		n=n|(n>>16);//左321
		cout<<(n-1)/2<<endl;
	}
	return 0;
}
