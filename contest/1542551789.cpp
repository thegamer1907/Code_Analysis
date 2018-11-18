#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main() {
	int n,k;
	cin >> n>>k;
	int sum;
	bool a[16];
	memset(a, false, sizeof(a));
	for (int i = 0; i < n; ++i) {
		sum = 0;
		for(int j = 0; j < k; ++j) {
			int x;
			cin >> x;
			sum += (x << j);
		}
		a[sum] = true;
	}
	bool flag=false;
	
	for (int i = 0; i < pow(2, k); i++) {
		if (!a[i])
			continue;
		for (int j = 0; j < pow(2, k);++j) {
			if (!a[j])
				continue;
			if ((i&j) == 0) {
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	//system("pause");
	return 0;
}