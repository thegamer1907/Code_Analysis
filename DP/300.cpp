#include <bits/stdc++.h>
using namespace std;
void  equal(int a[], int b[]){
	for (int i = 0; i < sizeof(a)/ sizeof(a[0]); i++)
		b[i] = a[i];
}
int main(){
	int n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)	cin >> a[i];
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++)	cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, x[n], y[m];
	equal(a, x);
	equal(b, y);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (abs(a[i] - b[j]) <= 1 and a[i] != -1 and b[j] != -1){
				cnt++;
				a[i] = -1;
				b[j] = -1;
			}
		}
	}
	equal(x, a);
	equal(y, b);
	for (int i = n - 1; i >= 0; i--){
		for (int j = 0; j < m; j++){
			if (abs(a[i] - b[j]) <= 1 and a[i] != -1 and b[j] != -1){
				cnt1++;
				a[i] = -1;
				b[j] = -1;
			}
		}
	}
	equal(x, a);
	equal(y, b);
	for (int i = 0; i < n; i++){
		for (int j = m - 1; j >= 0; j--){
			if (abs(a[i] - b[j]) <= 1 and a[i] != -1 and b[j] != -1){
				cnt2++;
				a[i] = -1;
				b[j] = -1;
			}
		}
	}
	equal(x, a);
	equal(y, b);
	for (int i = n - 1; i >= 0; i--){
		for (int j = m - 1; j >= 0; j--){
			if (abs(a[i] - b[j]) <= 1 and a[i] != -1 and b[j] != -1){
				cnt3++;
				a[i] = -1;
				b[j] = -1;
			}
		}
	}
	cnt = max(cnt, cnt1);
	cnt = max(cnt, cnt2);
	cout << max(cnt, cnt3);
	return 0;
}
