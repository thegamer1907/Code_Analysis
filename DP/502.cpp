#include<iostream>
#include<math.h>
#include <algorithm>
#include<string>
#include<vector>
#include <string.h>
#include <functional>  
using namespace std;
int main() {
	
	int n, m, a[100], b[100], k, i, j;
	cin >> n;
	for (i = 0; i<n; i++)cin >> a[i];
	sort(a, a + n);
	cin >> m;
	for (i = 0; i<m; i++)cin >> b[i];
	sort(b, b + m);
	k = 0;
	for (i = 0; i<n; i++) {
		for (j = 0; j<m; j++)
			if (abs(a[i] - b[j])<2) {
				k++;
				b[j] = -1;
				break;
			}
	}
	cout << k << endl;
}