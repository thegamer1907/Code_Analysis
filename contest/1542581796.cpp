#include <bits/stdc++.h>
using namespace std;
int a[16];

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i ++) {
		int b = 0, c;
		for (int j = 1; j <= k; j ++) {
			scanf("%d", &c);
			b = b * 2 + c;
		}
		++ a[b];
	}
	int flag = 0;
//	cout << a[1] << " " << a[2] << endl;
	for (int i = 0; i < 16; i ++) {
		for (int j = 0; j < 16; j ++) {
			if ((i & j) == 0) {
//				cout << i << " " << j << " " << a[i] << " " << a[j] << endl;
				if (a[i] && a[j]) {
					flag = 1;
				}
			}
		}
	}
	if (flag) {
 		puts("YES");	
	} else {
		puts("NO");
	}
}