#include <iostream>
#include <cstdio>
#define N 100005
using namespace std;

int n, k, c, s, a[N][5], w[10];
bool v[20];
bool can;
int main()
{
	int i, j, e, ii, jj;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		s = 0;
		for (j = 0; j < k; j++) {
			scanf ("%d", &a[i][j]);
			s = s * 2 + a[i][j];
		}
		v[s] = true;
	}
	for (i = 0; i < 16; i++) {
		for (j = 0; j < 16; j++) {
			c++;
			if (!v[i] ||!v[j]) continue;
			ii = i;
			jj = j;
			can = true;
			for (e = 3; e >= 0; e--) {
				if (ii % 2 == 1) w[e] = c;
				ii /= 2;
			}
			for (e = 3; e >= 0; e--) {
				if (jj % 2 == 1 && w[e] == c) {
					can = false;
					break;
				}
				jj /= 2;
			}
			if (can) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
    return 0;
}
