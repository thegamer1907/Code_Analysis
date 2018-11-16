#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<vector>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string str;
	cin >> str;
	char now = str[0];
	int counter = 0;
	for (auto c : str) {
		if (c == now) {
			counter++;
		}
		else {
			counter = 1;
			now = c;
		}
		if (counter == 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}