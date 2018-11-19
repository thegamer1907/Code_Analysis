
#include <algorithm>
#include <iostream>
#include <fstream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define fore(i, l, r) for (int i = l; i < r; i++)
#define forn(i, n) fore(i, 0, n)

int main() {

	string pass; cin >> pass;
	int n; cin >> n;
	bool answer = false;

	vector<string> words(n);
	forn(i, n) {
		cin >> words[i];
		if (words[i] == pass) answer = true;
	}

	forn(i, n) forn(j, n)
		if (words[i][1] == pass[0] && words[j][0] == pass[1])
			answer = true;

	if (answer) cout << "YES";
	else cout << "NO";
	return 0;
}