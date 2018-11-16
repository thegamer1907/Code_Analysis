#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <functional>
#include <stack>
#include <set>
#include <queue>
#include <vector>
#include <map>
#include <deque>
#include <stdio.h>

using namespace std;

int arr[100001];

int main() {
	string s;
	cin >> s;
	s = 'e' + s;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			arr[i] = 1;
		}
	}
	for (int i = 0; i < 100001; i++) {
		arr[i] += arr[i - 1];
	}
	cout << endl;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		int res = arr[n2] - arr[n1];
		cout << res << endl;
	}
	return 0;
}
