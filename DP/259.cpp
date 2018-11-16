#include <bits\stdc++.h>
using namespace std;

int a[10000];
int b[10000];

int main() {
	int n , m;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a , a + n);
	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	} 
	sort(b , b + m);
	int p = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(abs(a[i] - b[j]) < 2) {
				p++;
				b[j] = -1;
				break;
			}
		}
	}
	cout << p;
}
