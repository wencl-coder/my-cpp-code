#include<bits/stdc++.h>
using namespace std;

typedef struct fruit_power {
	int hgh;
	int efo;
} fp;

int cmp(const void*a, const void*b);
void p_s(fp*x, int n, int gao, int s);

int main() {
	int n, s, a, b, i, t = 0;
	cin >> n >> s >> a >> b;
	fp x[5000], y[5000];
	for (i = 0; i < n; i++) {
		cin >> x[i].hgh >> x[i].efo;
		if (x[i].hgh <= (a + b)) {
			y[t] = x[i];
			t++;
		}
	}
	qsort(y, t, sizeof(y[0]), cmp);
	p_s(y, t, a + b, s);
	return 0;
}




int cmp(const void*a, const void*b) {
	fp*s1 = (fp*)a;
	fp*s2 = (fp*)b;
	return (s1->efo) - (s2->efo);
}

void p_s(fp*x, int n, int gao, int s) {
	int i = 0, cnt = 0;
	for (i = 0; i < n; i++) {
		if (s >= x[i].efo) {
			cnt++;
			s -= x[i].efo;
		}
	}
	cout << cnt << endl;
}
