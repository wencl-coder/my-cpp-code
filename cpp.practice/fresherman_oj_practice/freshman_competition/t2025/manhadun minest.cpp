#include<bits/stdc++.h>
using namespace std;

int man(int x, int y, int x1, int x2, int x3, int y1, int y2, int y3) {
	int f = abs(x - x1) + abs(y - y1);
	int s = abs(x - x2) + abs(y - y2);
	int t = abs(x - x3) + abs(y - y3);
	return f + s + t;
}

int minman(int x1, int x2, int x3, int y1, int y2, int y3) {
	int x, y, min = 100;
	for (x = 1; x <= 10; x++) {
		for (y = 1; y <= 10; y++) {
			if (man(x, y, x1, x2, x3, y1, y2, y3) < min) {
				min = man(x, y, x1, x2, x3, y1, y2, y3);
			}
		}
	}
	return min;
}

int main() {
	int T, i;
	cin >> T;
	for (i = 0; i < T; i++) {
		int x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		cout << minman(x1, x2, x3, y1, y2, y3) << endl;
	}
	return 0;
}
