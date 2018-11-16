#include <bits/stdc++.h>
using namespace std;

int a[10000] , b[10000];

int main(){
	int n , m;
	cin >> n;
	for (int i = 0 ; i < n ; i++)
		cin >> a[i] ;
	cin >> m;
	for (int i = 0 ; i < m ; i++)
		cin >> b[i];
	sort(a , a + n) ;
	sort(b , b + m) ;
	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			if (a[i] - b[j] == 1 || a[i] - b[j] == -1 || a[i] - b[j] == 0) {
				ans++;
				a[i] = -100000;
				b[j] = -100000;
			}
		}
	}
	cout << ans;
}
