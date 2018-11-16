#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <set>
using namespace std;

int main(){
	int n, t;
	int a[30005];
	cin >> n >> t;
	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}
	bool res = 0;
	int pos = 1;
	while (pos < n) {
		if (pos + a[pos] == t) {
			res = 1;
			break;
		}
		else {
			pos = pos + a[pos];
		}
	}
	if (res) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}