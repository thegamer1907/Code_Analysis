#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int a, b, ans = 0;
	cin >> a >> b;
	while (a > 0 && b > 0) {
		if (a < b) {
			a++;
			b -= 2;
		}
		else {
			b++;
			a -= 2;
		}
		if(a >= 0 && b >= 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}