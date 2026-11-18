#include<bits/stdc++.h>
using namespace std;

#define mi 20251108

long long pan(long long n) {
	if (n <= mi) {
		return n;
	} else {
		long long i = n - mi;
		long long j =i/1024;
		if (i%1024 > 0) {
		return (n -((j+1)*1024));
		} else {
			return mi;
		}
	}
}

int main() {
	int t, i;
	long long n;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> n;
		cout << pan(n) << endl;
	}
	return 0;
}
