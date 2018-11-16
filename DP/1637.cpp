#include <iostream>
#include <functional>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstdio>
#include <queue>
#include <stack>
#include <cmath>
#include <list>
#include <set>
#include <map>

#define MaxInt 2e9
#define LF '\n';

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

map<string, int> names;

int main(void)
{
	ios::sync_with_stdio(false);
	string input;
	int len;
	cin >> input;

	len = input.size();

	for (int a = 0; a < len - 3; a++) {
		if (input[a] == 'A' && input[a + 1] == 'B') {
			for (int b = a + 2; b < len - 1; b = b + 1) {
				if (input[b] == 'B' && input[b + 1] == 'A') {
					cout << "YES";
					return 0;
				}
			}
			break;
		}
	}

	for (int a = 0; a < len - 3; a++) {
		if (input[a] == 'B' && input[a + 1] == 'A') {
			for (int b = a + 2; b < len - 1; b = b + 1) {
				if (input[b] == 'A' && input[b + 1] == 'B') {
					cout << "YES";
					return 0;
				}
			}
			break;
		}
	}

	cout << "NO";
	return 0;
}