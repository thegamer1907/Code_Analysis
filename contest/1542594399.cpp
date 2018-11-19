#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iomanip>
#define mp make_pair
#define pb push_back

using namespace std;
string b[119];
int main() {
	string a;
	cin >> a;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {

		cin >> b[i];
		if (a == b[i]) {
			cout<< "YES";
			return 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			
			if (b[i][1] == a[0] && b[j][0] == a[1]) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}