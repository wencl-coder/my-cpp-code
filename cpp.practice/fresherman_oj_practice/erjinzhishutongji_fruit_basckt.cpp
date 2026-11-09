#include<bits/stdc++.h>
using namespace std;

int c_bin(long long n);

int main() {
	int t, i;
	long long n;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> n;
		cout << c_bin(n) << endl;
	}
	return 0;
}


int c_bin(long long n) {
	int cnt = 0;
	while (n != 0) {
		if (n & 1) {
			cnt++;
		}
		n >>= 1;
	}
	return cnt;
}

