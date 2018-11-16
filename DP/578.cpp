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
	for (int i = 0; i <= s.size(); i++) {
		arr[i] += arr[i - 1];
	}
	int m;
	cin >> m;
	int n1,n2;
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &n1, &n2);
		printf("%d\n", arr[n2] - arr[n1]);
	
	}
	return 0;
}
