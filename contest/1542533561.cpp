#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <stdlib.h>
#include <climits>
#include <queue>
#include <utility>
#include <math.h>
#include <ctype.h>
#include <map>
#include <list>
#define ll long long int
using namespace std;

int main() {

	string pass; cin >> pass;
	int n; cin >> n;
	char ch[100][2];
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < 2; j++)
			cin >> ch[i][j];
	}
	int f = -1;
	for (int i = 0; i < n; i++) {
		if (pass[0] == ch[i][0]&& pass[1] == ch[i][1]) {
			cout << "YES" << endl;
			return 0;
		}
		if (pass[0] == ch[i][1]) {
			f = 0;
			//break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (f==0&&pass[1] == ch[i][f]) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}