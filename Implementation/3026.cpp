#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iomanip>

#pragma comment(linker, "/STACK:16000000")

#define rn(n) int n; cin >> n
#define fv(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define db double
#define sqr(n) ((n) * (n))

using namespace std;

const int INF = 1'000'000'007;
const int MOD = 998'244'353;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("file.in.txt", "r", stdin);
	freopen("file.out.txt", "w", stdout);
#endif
	rn(n);
	vector <string> s;
	fv(i, n) {
		string a;
		cin >> a;
		s.push_back(a);
	}
	bool b = false;
	fv(i, n) {
		if (s[i].find("OO") != string::npos) {
			b = true;
			if (s[i][0] == 'O' && s[i][1] == 'O') s[i][0] = '+', s[i][1] = '+';
			else s[i][3] = '+', s[i][4] = '+';
			break;
		}
	}
	if (b) {
		cout << "YES\n";
		for (string a : s) {
			cout << a << endl;
		}
	}
	else {
		cout << "NO";
	}
	return 0;
}